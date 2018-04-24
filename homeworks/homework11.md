## Homework 11

### C Exercises

Modify the link below so it points to the `ex11` directory in your
student repository.

[Here is a link to the ex11 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex11)

### Think OS Chapter 11 reading questions

1) Why is is a bad idea to pass a `sem_t` as a parameter?

Because it acts like a structure so when you pass it and assign it a copy is made. The behavior of this copy is undefined.

2) When you use a Semaphore as a mutex, what should its initial value be?

Usually 1.

3) Can you think of another use for a Semaphore where you might use a different initial value?

Possibly 0 if you want it to count the number of something and there are 0 to begin with.

4) In my solution to the producers-consumers problem using Semaphores,
what does it mean if the value of `queue->spaces` is `3` at some point in time?


If `queue->spaces` is `3` it means that there are 3 empty spaces left in the queue. 

5) What does it mean if `queue->space` is `-3`?

I believe this means that 3 items need to be consumed before there is any empty space.

6) Why doesn't `queue_pop` have to use `queue_empty` to check whether the queue is empty?

Because it's waiting for queue->items and when queue->items is positive the queue will not be empty.

7) Any problem that can be solved with Semaphores can also be solved with mutexes and condition variables.
How can you prove that that's true?

This is true because you can implement a semaphore with mutexes and condition variables.

8) What is Property 3?  Hint: see *The Little Book of Semaphores*, 
[Section 4.3](http://greenteapress.com/semaphores/LittleBookOfSemaphores.pdf). 

If threads are waiting on a semaphore when it executes signal, one of the waiting threads needs to be woken up.

