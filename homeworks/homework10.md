## Homework 10

### C Exercises

Modify the link below so it points to the `ex12` directory in your
student repository.  That's right, Homework 10 is to do Exercise 12.

[Here is a link to the ex12 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex12)

### Think OS Chapter 10 reading questions

1) What does it mean to say that a data structure is thread safe?

All threads can access the data structure at the same time without causing any issues.

2) In the circular buffer implementation of a queue, why is the maximum number of elements in the queue `n-1`,
if `n` is the size of the array?

Because if you could store n then next_in = next_out which would imply the queue is empty even though it's not.

3) If there is no mutex to protect the queue, give an example of a sequence of steps that could leave
the queue in an inconsistent state.

Two producers could access next_in at the same point causing the queue to only have one of these two values that were supposedly added.

4) When a thread calls `cond_wait`, why does it have to unlock the mutex before blocking?

Because the mutex must be locked before you call cond_wait and it's the mutex that protects the queue in this example. If it did not unlock the queue then items could not be added to the queue so it would always be empty.

5) When a thread returns from `cond_wait`, what do we know is definitely true?  What do we think is probably true?

The condition being waited on is now true and the mutex is locked. But it might be the case that there is an interception so you still have to check again.

6) What happens if you signal a condition variable when there are no waiting threads?

Nothing.

7) Do you have to lock the mutex to signal a condition variable?



8) Does the condition have to be true when you signal a condition variable?




