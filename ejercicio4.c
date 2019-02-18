#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid1;
	int n;

	if ( ( pid1=fork() == 0) ) //hijo
	{
		//printf("hijo");
		for(n=0; n<4000000; n++)
		{
			printf("%d \n", n);
		}
	}
	else
	{
		while(1)
		{
			//nada
		}
	}

	return 0;
}
