#include<stdio.h>
#include<stdlib.h>

int main() {
	int a;
	printf("n = ");
	scanf_s("%d", &a);
	unsigned long long *f = (unsigned long long *)malloc(sizeof(unsigned long long)*a);
	f[0] = 0;
	f[1] = 1;
	for (int i = 2;i < a;i++) {
		f[i] = f[i - 2] + f[i - 1];
	}
	printf("series is %llu", f[a - 1]);
}