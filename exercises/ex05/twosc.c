#include <stdio.h>

int main() {
	char twelve = 12;
	char neg_twelve = (twelve^255) + 1; // invert and add
	printf("%d\n", neg_twelve);
	return 0;
}