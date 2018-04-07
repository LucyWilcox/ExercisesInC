## Homework 9

### C Exercises

Modify the link below so it points to the `ex09` directory in your
student repository.

[Here is a link to the ex09 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex09)

### Think OS Chapter 9 reading questions

1) Why does each thread have its own stack?

So they can call functions while not interfering with other threads.

2) What does the gcc flag `-lpthread` do?

It links the pthread library

3) What does the argument of `pthread_exit` do?

It can pass a value to the tread it is joining with.

4) Normally the same thread that created a thread also waits to join it.
What happens if another thread tries to join a thread it did not create?

It will still be able to join, it will just wait for the thread it is joining to complete first.

5) What goes wrong if several threads try to increment a shared integer at the same time?

They might get the integer before other threads have finished incrementing it so each thread could potential end up returning the same value even thought they were each supposed to increment it.

6) What does it mean to "lock a mutex"?

It prevents other threads from continuing past the locked mutex until it is unlocked.
