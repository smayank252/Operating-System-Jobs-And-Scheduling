#include<stdio.h>
#include<conio.h>
#include<unistd.h>
int main()
{
	int pid;
	pid_t=pid;
	pid=fork();
	if(pid < 0)
	{
		printf("\n Error");
		exit(0);
	}
	elseif(pid == 0)
	{
		printf("I Am in Child Process");
		printf("my child process ID %d",getpid());
		exit(0);
	}
	else
	{
		wait(NULL);
		printf("Parent process ID %d",getpid());
		exit(0);
	}
	return(0);
	
}

