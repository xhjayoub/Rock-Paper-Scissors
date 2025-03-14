#include <stdio.h>
#include <string.h>

void getPlayerInput(int playerN, char *p)
{
	printf("Player %d : ", playerN);
	scanf("%8s", p);
}

void printWinner(char *p1, char *p2)
{
	printf("%s vs %s\n", p1, p2);
	// Check if identical
	if (!strcmp(p1, p2))
		printf("Draw");
	else if ((!strcmp(p1, "Rock") && !strcmp(p2, "Scissors")) || (!strcmp(p1, "Paper") && !strcmp(p2, "Rock")) || (!strcmp(p1, "Scissors") && !strcmp(p2, "Paper")))
		printf("Player 1 wins!");
	else
		printf("Player 2 wins!");
	printf("\n\n");
}

int main()
{
	printf("Rock Paper Scissors!\n");

	char p1[8];
	char p2[8];

	getPlayerInput(1, p1);
	getPlayerInput(2, p2);

	printWinner(p1, p2);
	return 0;
}
