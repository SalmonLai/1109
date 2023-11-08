#include<stdio.h>

int main() {
	int r = 1;
	int a, b;
	printf("Enter two number¡G");
	scanf_s("%d %d", &a, &b);
	while (1) {
		if (r%a == 0 && r%b == 0) {
			printf("LCM is %d\n", r);
			break;
		}
		else r++;
	}
}