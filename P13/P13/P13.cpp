#include <stdio.h>
#include <stdlib.h>

double power(double,int);

int main() {
	int k;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d����=%.2f\n", k, ans);
	system("pause");
}

double power(double x, int n) {
	double a = 1;
	for (int i = 1; i <= n; i++){a *= x;}
	return a;
}