#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
  printf("Main pid %d\n", getpid());
  int latest = fork();

  if (latest == 0)
  {
    printf("I am the child process with ID: %d\n", getpid());
  }
  else
  {
    wait(NULL);
    printf("I am the parent process with ID: %d\n", getpid());
  }
  return 0;
}