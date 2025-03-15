#include <stdio.h>
#include <string.h>

#define ROCK "Rock"
#define PAPER "Paper"
#define SCISSORS "Scissors"

void getPlayerInput(int playerN, char *p)
{
	do {
		printf("Player %d : ", playerN);
		scanf("%9s", p);
	} while (strcmp(p, ROCK) && strcmp(p, PAPER) && strcmp(p, SCISSORS));
}

void printWinner(char *p1, char *p2)
{
	printf("%s vs %s\n", p1, p2);
	// Check if identical
	if (!strcmp(p1, p2))
		printf("Draw");
	else if ((!strcmp(p1, ROCK) && !strcmp(p2, SCISSORS)) || (!strcmp(p1, PAPER) && !strcmp(p2, ROCK)) || (!strcmp(p1, SCISSORS) && !strcmp(p2, PAPER)))
		printf("Player 1 wins!");
	else
		printf("Player 2 wins!");
	printf("\n\n");
}

int main()
{
	printf("Rock Paper Scissors!\n");
	char playAgain = 'y';
	char p1[9];
	char p2[9];
	while (playAgain == 'y') {
		getPlayerInput(1, p1);
		getPlayerInput(2, p2);

		printWinner(p1, p2);

		printf("Play again ? (y or n) ");
		scanf("%1s", &playAgain);
	}
	return 0;
}
