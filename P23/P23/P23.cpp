#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE,WON,LOSE};
int roll(void);

int main() {
	
	int sum,point;
	enum Status gamestatus;
	srand(time(NULL));
	sum = roll();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gamestatus = LOSE;
		break;

	default:
		gamestatus = CONTINUE;
		point = sum;
		printf("Point is %d\n", point);
		break;
	}
	while (gamestatus == CONTINUE)
	{
		sum = roll();
		if (sum == point) gamestatus = WON;
		else if (sum == 7) gamestatus = LOSE;
	}
	if (gamestatus == WON) printf("Player Wins\n");
	else printf("Player Loses\n");
	system("pause");
	return 0;

}
int roll(void) {

	int d1, d2, s;
	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	s = d1 + d2;
	printf("Player rolled %d + %d\n", d1, d2);
	return s;

}