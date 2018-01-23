## Homework 1

### C Exercises

[Here is a link to the ex01 directory in my repository](https://github.com/YOUR_GITHUB_USERNAME_HERE/ExercisesInC/tree/master/exercises/ex01)

### Think OS Chapter 1 reading questions

1) Give an example of a feature common in interpreted languages that is rare in compiled languages.

Dynamic types

2) Name two advantages of static typing over dynamic typing.

Fails at compilation, not runtime: finds errors even when parts of code are not run and enable the program to run faster because checks aren't done in runtime. Also it general saves space because the types do not need to be stored in memory.

3) Give an example of a static semantic error.

error: ‘val’ undeclared (first use in this function)
   val = get_val(card_name);

4) What are two reasons you might want to turn off code optimization?

If you have optimizations on you might miss bugs that only occure when code optimization is off. Optimization can also cause the code to take longer to compile.

5) When you run `gcc` with `-S`, why might the results look different on different computers?

This assembly code differs depending on the computer and the resulting file is made with whichever version of assembly code is on the computer the command is performed on.

6) If you spell a variable name wrong, or if you spell a function name wrong, the error messages 
you get might look very different.  Why?

They might get caught at different times like parsing vs linking.

7) What is a segmentation fault?

When you try to read or write to an incorrect loctaion in memory.


