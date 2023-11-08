#include <stdio.h>
#include <stdlib.h>

long factorial(long n);

int main() {

	for (int i = 0; i <= 10; i++) printf("%2d! = %1d\n ", i, factorial(i));
	system("pause");
	return 0;

}

long factorial(long n) {

	if (n <= 1) return 1;
	else return (n*factorial(n - 1));

}