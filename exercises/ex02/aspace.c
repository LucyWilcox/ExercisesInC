/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

Address spaces sketched by Lucy Wilcox.

*/

#include <stdio.h>
#include <stdlib.h>

int global;

int main ()
{
    int local = 5;
    void *p = malloc(128);

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf ("Address of p is %p\n", p);
    
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