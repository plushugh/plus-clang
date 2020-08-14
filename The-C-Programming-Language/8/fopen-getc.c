#define NULL 0
#define EOF (-1)
#define BUFSIZ 1024
#define OPEN_MAX 20

typedef struct _iobuf
{
  int cnt;
  char *ptr;
  char *base;
  int flag;
  int fd;
} FILE;
extern FILE _iob[OPEN_MAX];

#define stdin (&_iob[0])
#define stdout (&_iob[1])
#define stderr (&_iob[2])

enum _flags
{
  _READ = 01,
  _WRITE = 02,
  _UNBUF = 04,
  _EOF = 010,
  _ERR = 020
};

int _fillbuf(FILE *);
int _flushbuf(int, FILE *);

#define feof(p) (((p)->flag & _EOF) != 0)
#define ferror(p) (((p)->flag & _EOF) != 0)
#define fileno(p) ((p)->fd)

#define getc(p) (--(p)->cnt >= 0                  \
                     ? (unsigned char)*(p)->ptr++ \
                     : _fillbuf(p))
#define putc(x, p) (--(p)->cnt >= 0         \
                        ? *(p)->ptr++ = (x) \
                        : _flushbuf((x), p))

#define getchar() getc(stdin)
#define putchar(x) putc((x), stdout)

#include <unistd.h>
#include <fcntl.h>
#define PERMS 0666

FILE *myfopen(char *name, char *mode)
{
  int fd;
  FILE *fp;

  if (*mode != 'r' && *mode != 'a')
    return NULL;
  for (fp = _iob; fp < _iob + OPEN_MAX; fp++)
    if ((fp->flag & (_READ | _WRITE)) == 0)
      break;
  if (fp >= _iob + OPEN_MAX)
    return NULL;
  if (*mode == 'w')
    fd = creat(name, PERMS);
  else if (*mode == 'a')
  {
    if ((fd = open(name, O_WRONLY, 0)) == -1)
      fd = creat(name, PERMS);
    lseek(fd, 0L, 2);
  }
  else
    fd = open(name, O_RDONLY, 0);
  if (fd == -1)
    return NULL;
  fp->fd = fd;
  fp->cnt = 0;
  fp->base = NULL;
  fp->flag = (*mode == 'r') ? _READ : _WRITE;
  return fp;
}

#include <stdlib.h>

int _fillbuf(FILE *fp)
{
  int bufsize;
  if ((fp->flag & (_READ | _EOF | _ERR)) != _READ)
    return EOF;
  bufsize = (fp->flag & _UNBUF) ? 1 : BUFSIZ;
  if (fp->base == NULL)
    if ((fp->base = (char *)malloc(bufsize)) == NULL)
      return EOF;
  fp->ptr = fp->base;
  fp->cnt = read(fp->fd, fp->ptr, bufsize);
  if (--fp->cnt < 0)
  {
    if (fp->cnt == -1)
      fp->flag |= _EOF;
    else
      fp->flag |= _ERR;
  }
  return (unsigned char)*fp->ptr++;
}

FILE _iob[OPEN_MAX] = {
    {0, (char *)0, (char *)0, _READ, 0},
    {0, (char *)0, (char *)0, _WRITE, 1},
    {0, (char *)0, (char *)0, _WRITE | _UNBUF, 2}};