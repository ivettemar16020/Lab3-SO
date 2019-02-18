#include <stdio.h>

int main()
{
	int n, pid;
	for(n = 0; n<4; n++){
		pid = fork();
		printf("%d\n", pid);
	}
	return 0;
}
