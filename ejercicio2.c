#include <stdio.h>
#include <time.h>

int main()
{
	int i, o, u;
	clock_t clocky1, clocky2;
	double resultado;

	clocky1 = clock();
	for (i=0; i<1000000; i++){
	}

	for (o=0; o<1000000; o++){
        }

        for (u=0; u<1000000; u++){
        }
	clocky2 = clock();
	resultado = (double)(clocky2 - clocky1);
	printf("%f\n", resultado);
}
