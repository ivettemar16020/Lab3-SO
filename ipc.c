#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
	if(argc!=3)
	{
		printf("Cantidad de argumentos no valida \n");
		return -1;
	}

	// n -> argv[1]
	// x -> argv[2]
	int n, i, shm_fd;
	char x;
	void* ptr;

	const int SIZE = 4096; //size of shared memory obj
	const char* name = "OS"; //name od sm

	n = atoi(argv[1]);
	x = atoi(argv[2]);

	shm_fd = shm_open(name, O_CREAT | O_RDRW, 0666); //create sm object

	for(i=0; i<SIZE; i++)
	{
		if(i % n == 0)
		{
			///Enviar x al proceso hijo
		}
	}

	return 0;
}
