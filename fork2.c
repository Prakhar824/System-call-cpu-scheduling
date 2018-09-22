#include  <stdio.h>
#include  <sys/types.h>

#define   MAX_COUNT  200

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

void  main(void)
{
     pid_t  pid;

     pid = fork();
     if (pid == 0) 
          ChildProcess();
     else 
          ParentProcess();
}

void  ChildProcess(void)
{
     int   i;
     for (i = 1; i <= 5; i++)
{
for (int j=1;j<=i;j++)
{
sleep(1);
printf("*");
}
printf("\n");
}
}

void  ParentProcess(void)
{
     int   i;

     for (i = 1; i <= 5; i++)
        {
          for (int j=1;j<=i;j++)
{
sleep(1);
printf("%d", j);
}
     printf("\n");
	
}
}
