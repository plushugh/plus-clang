#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <setjmp.h>

static jmp_buf env_alrm;

static void
sig_alrm2(int signo)
{
  longjmp(env_alrm, 1);
}

static void
sig_alrm1(int signo)
{
  /* nothing to do, just return to wake up the pause */
}

unsigned int
sleep1(unsigned int seconds)
{
  if (signal(SIGALRM, sig_alrm1) == SIG_ERR)
    return (seconds);
  alarm(seconds);    /* start the timer */
  pause();           /* next caught signal wakes us up */
  return (alarm(0)); /* turn off timer, return unslept time */
}

unsigned int
sleep2(unsigned int seconds)
{
  if (signal(SIGALRM, sig_alrm2) == SIG_ERR)
    return (seconds);
  if (setjmp(env_alrm) == 0)
  {
    alarm(seconds); /* start the timer */
    pause();        /* next caught signal wakes us up */
  }
  return (alarm(0)); /* turn off timer, return unslept time */
}

int main()
{
  printf("sleep1(5) = %d\n", sleep1(5));

  printf("sleep1(1) = %d\n", sleep1(1));

  printf("sleep2(5) = %d\n", sleep2(5));

  printf("sleep2(1) = %d\n", sleep2(1));
}