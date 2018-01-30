/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

/* Added solutions by Lucy Wilcox

1. The program is trying to set each element of the array to 42, then make another array
where each element is it's index, and finally print of the array generated in foo where all element are 42.

2. There is a compilation error saying that foo return the address of local variable. I think that this means
that pointer array will not be pointing to the array generated in this function.

3. I get a segmentation fault. I think it's because in when the program is trying to access the array
in main it doesn't exist in memory at that point.

4. Nothing is different... except that it doesn't print the locations 


*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
