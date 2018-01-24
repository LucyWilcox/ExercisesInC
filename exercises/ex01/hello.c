#include <stdio.h>

int main() {
	int x = 5;
	int y = x + 1;
    printf(y);
    return 0;
}

/* It appears that in optimization, the values such as the string "Hello World"
and the calculated value of y are stored. In the non-optimized version only the
method to read and process that data is outlined.

It's interesting that the optimized printing of "hello world" calls puts not printf
like the non-optmized one, but the optimized printing of y calls __printf_chk so
it looks like the optimization might also be chose better functions to use.

*/