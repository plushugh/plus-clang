#include <stdio.h>
#include <string.h>
#define MAXlINE 1000

int main(int argc, char *argv[])
{
    // char line[MAXlINE];
    char *p = NULL;
    size_t *linemax = MAXlINE;
    long lineno = 0;
    int c, except = 0, number = 0, found = 0;

    while (--argc > 0 && (*++argv)[0] == '-')
        while (c = *++argv[0])
            switch (c)
            {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            default:
                printf("find: Ilegal option %c\n", c);
                argc = 0;
                found = -1;
                break;
            }
    if (argc != 1)
        printf("usage: find [-x | -n] [pattern]\n");
    else 
        while (getline(&p, &linemax, stdin) > 0) {
            lineno++;
            if ((strstr(p, *argv) != NULL) != except) {
                if (number)
                    printf("%ld:", lineno);
                printf("%s", p);
                found++;
            }
        }
    return found;
}