/* Example code for Think OS.

Copyright 2014 Allen Dwney
License: GNU GPLv3

Address spaces sketched by Lucy Wilcox.

=======

4. The heap is growing up to larger addresses for p2

5. The stack appears to grow down

6. There is 20 hex between each of the addresses so more than enough bytes

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

void printloc () {
	int local = 2;
	printf("Address of local is %p\n", &local);
}

int main ()
{
    int var2 = 5;
    void *p = malloc(128);
    void *p2 = malloc(128);
    char *s = "Literal string";


    void *r1 = malloc(23);
    void *r2 = malloc(23);

    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);

    printf ("Address of p is %p\n", p);
    printf("Address of p2 is %p\n", p2);
    printf ("Address of s is %p\n", s);

    printf ("p points to %p\n", p);
    printf ("s points to %p\n", s);


    printloc();

    printf ("Address of r1 is %p\n", r1);
    printf("Address of r2 is %p\n", r2);

    return 0;
}


/*
~~~~~~~~~
Stack 

var2 -> 0x7ffd4a72d3fc

~~~~~~~~~
Heap

p -> 0xbae010

~~~~~~~~~
Globals 

var1 -> 0x60104c

~~~~~~~~~
Constants

s -> 0x400714

~~~~~~~~~
Code
 
main -> 0x4005d6

~~~~~~~~~
*/
