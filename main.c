#include <stdio.h>

void getPlayerInput(int playerN, char *p)
{
	printf("Player %d : ", playerN);
	scanf("%8s", p);
}

int main()
{
	printf("Rock Paper Scissors!\n");

	char p1[8];
	char p2[8];

	getPlayerInput(1, p1);
	getPlayerInput(2, p2);
	return 0;
}
