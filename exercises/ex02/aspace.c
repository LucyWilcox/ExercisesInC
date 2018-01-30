/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

Address spaces sketched by Lucy Wilcox.

=======

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

int main ()
{
    int var2 = 5;
    void *p = malloc(128);
    char *s = "Literal string";

    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
    printf ("Address of p is %p\n", p);
    printf ("Address of s is %p\n", s);

    return 0;
}


/*
~~~~~~~~~
Stack 

local -> 0x7ffd4a72d3fc

~~~~~~~~~
Heap

p -> 0xbae010

~~~~~~~~~
Globals 

global -> 0x60104c

~~~~~~~~~
Constants


~~~~~~~~~
Code
 
main -> 0x4005d6

~~~~~~~~~
*/