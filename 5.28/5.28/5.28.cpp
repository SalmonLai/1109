#include <stdio.h>

char trans(char c) {
	if (c >= 'A' && c <= 'Z') return c + 32;
	else if (c >= 'a' && c <= 'z') return c - 32;
	return '\0';
}

int main() {
	char c;
	printf("Enter a char :");
	scanf_s("%c", &c);
	printf("Answer is %c", trans(c));
}