#include <stdio.h>
#include <stdlib.h>

int max(int x, int y, int z);

int main() {
	int a, b, c;
	printf("Enter three integers¡G");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Maximum is¡G%d", max(a, b, c));
	system("pause");
	return 0;
}

int max(int x, int y, int z) {
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}