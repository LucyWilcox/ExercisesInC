#include <stdio.h>

int main() {
	char teststring[] = "string";

	for (int i = 0; i < sizeof(teststring); i ++) {
		teststring[i] = teststring[i]^32; // xor flips 6th bit which is 32
	}

	printf("%s\n", teststring);
	return 0;
}