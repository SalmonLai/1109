#include<stdio.h>

double pow(double base, int exponent) {
	if (exponent < 1) {
		return 1.0;
	}
	else {
		return base * pow(base, exponent - 1);
	}
}

int main() {
	double base;
	int exponent;
	printf("Enter the base¡G");
	scanf_s(" %lf", &base);
	printf("Enter the exponent¡G");
	scanf_s(" %d", &exponent);
	printf("pow(%.2lf,%d) = %.2lf\n", base, exponent, pow(base, exponent));
}