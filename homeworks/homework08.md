## Homework 8

### C Exercises

Modify the link below so it points to the `ex08` directory in your
student repository.

[Here is a link to the ex08 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex08)

### Think OS Chapter 8 reading questions

**Multitasking**

1) What is the kernel's most basic task?

To handle interrupts.

2) When an interrupt occurs, what part of the hardware state is saved by hardware?

The program counter, status register, and any data registers it might use.

3) What is the difference between an interrupt and a context switch?

4) Give an example of an event that might cause a process to move from the blocked to the ready state.

An interrupt returns to the interrupted process when done, a context switch changes the process.

5) Why might a scheduler want to give higher priority to an I/O bound process?

The network connection being restored could cause a process which relies on network connection to move to the ready state. This is done through an interrupt which allows the interrupts handler to determine that the blocked process state can be switched to ready.


6) When I make French toast, I usually make a batch of 12 slices.  But my griddle only has room for 8 slices. 
Each piece of toast has to cook for 5 minutes on each side.  How can I schedule 12 slices onto 8 "cores"
to minimize the elapsed time to cook all 12 slices?  (Note: this question is not hypothetical; 
this is really how I make French toast.)

Put 8 slices on, after 5 minutes flip 4 and take 4 off. Put the 4 slices that have not been cooked on one half on. After 5 more minutes take the 4 which have been cooked on both sides off, flip the other 4 on the griddle and put the half-cooked slices back on the griddle. 



