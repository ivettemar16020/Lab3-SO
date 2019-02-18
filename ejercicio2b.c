#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid1, pid2, pid3;
	clock_t clocky1, clocky2;
	int i, o, u;
	double resultado;

	clocky1 = clock();

	if ((pid1=fork() == 0)) //hijo
	{
		if ((pid2=fork() == 0)) //nieto
		{
			//printf("Nieto (%d, hijo de %d)\n", getpid(), getppid());

			if ((pid3=fork() == 0)) //bisnieto
			{
				//printf("Bisnieto (%d, hijo de %d)\n", getpid(), getppid());
				for(i=0; i<1000000;i++)
				{
					//nada
				}
			}
			else
			{
				for(o=0; o<1000000; o++)
        	                {
	                                //nada
                	        }
				wait(NULL);

			}
		}
		else
		{
			for(u=0; u<1000000; u++)
			{
				//nada
			}
			wait(NULL);
		}
	}
	else
	{
		wait(NULL);
		clocky2 = clock();

		resultado = (double)(clocky2 - clocky1);
        	printf("El resultado es: (%f)\n", resultado);
	}

	return 0;
}

