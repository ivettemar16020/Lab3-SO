#include <stdio.h>

int main()
{
	int pid, pid2, pid3, pid4;
	pid  = fork();
	pid2 = fork();
	pid3 = fork();
	pid4 = fork();

	printf("%d\n", pid);
	printf("%d\n", pid2);
	printf("%d\n", pid3);
	printf("%d\n", pid4);
	return 0;
}
