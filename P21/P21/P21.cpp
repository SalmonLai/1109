#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned seed;
	printf("Enter seed�G");
	scanf_s("%u", &seed);
	srand(seed);

	for (int i = 1; i <= 20; i++)
	{
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0) printf("\n");
	}
	system("pause");
	return 0;
}