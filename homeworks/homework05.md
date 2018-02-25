## Homework 5

### C Exercises

Modify the link below so it points to the `ex05` directory in your
student repository.

[Here is a link to the ex05 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex05)

### Think OS Chapter 5 reading questions

**Bits and bytes**

1) Suppose you have the value 128 stored as an unsigned 8-bit number.  What happens if you convert 
it to a 16-bit number and accidentally apply sign extension?

It will be interprited using two's complement and I believe it will end up copying the leftmost digit which is 1. This will end up changing the value of the number.

2) Write a C expression that computes the two's complement of 12 using the XOR bitwise operator. 
Try it out and confirm that the result is interpreted as -12.

[here](https://github.com/LucyWilcox/ExercisesInC/blob/master/exercises/ex05/twosc.c)

3) Can you guess why IEEE floating-point uses biased integers to represent the exponent rather than a
sign bit or two's complement?

It allows comparisons to be preformed lexicographically. 

(couldn't really guess this one, looked it up: https://stackoverflow.com/questions/19864749/why-do-we-bias-the-exponent-of-a-floating-point-number)

4) Following the example in Section 5.4, write the 32-bit binary representation of -13 in single precision 
IEEE floating-point.  What would you get if you accidentally interpreted this value as an integer?

sign: 1
exp: 10000010
coeff: 10100000000000000000000

so 11000001010100000000000000000000 which if evaluated as an int would be a lot larger than -13!


5) Write a function that takes a string and converts from lower-case to upper-case by flipping the sixth bit.  
As a challenge, you can make a faster version by reading the string 32 or 64 bits at a time, rather than one
character at a time.  This optimization is made easier if the length of the string is a multiple of 4 or 8 bytes.

[here](https://github.com/LucyWilcox/ExercisesInC/blob/master/exercises/ex05/caseflip.c)


