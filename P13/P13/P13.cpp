#include <stdio.h>
#include <stdlib.h>

double power(double,int);

int main() {
	int k;
	double ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5的%d次方=%.2f\n", k, ans);
	system("pause");
}

double power(double x, int n) {
	double a = 1;
	for (int i = 1; i <= n; i++){a *= x;}
	return a;
}