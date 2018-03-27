## Homework 7

### C Exercises

Modify the link below so it points to the `ex07` directory in your
student repository.

[Here is a link to the ex07 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex07)

### Think OS Chapter 7 reading questions

### Caching

1) What happens if a program writes a new value into the program counter?

The flow of execution jumps to another place in the program.

2) What is the fundamental problem caches are meant to solve?

The fact that it takes a long time to transfer data to and from memory and this is done very often. The memory bottleneck.

3) If cache access time is 1 ns and memory access time is 10 ns, what is the average
access time of a program with hit rate 50%?  How about 90%?

At 50% it's 5.5ns, at 90% it's 1.9ns.

4) The book gives several examples of programming language features, like loops, that tend 
to improve locality in the access pattern of instructions and/or data.  Can you think of other examples?  
Or counter-examples that might decrease locality?

Reading a file as a stream probably improves locality.
A hash table probably wouldn't be read sequentially like an array so it could decrease locality, particularly if it's too large for the whole thing to be held in the cache. 

5)  If you refactor a program to improve locality, would you say the program is "cache aware"?  Why not?

Yeah, I think it has to be cache aware by definition.

6) See if you can estimate the cost of a memory cache by comparing the prices of two similar CPUs with 
different cache sizes.

An Intel i5-8400 has a 9MiB cache and costs $179.
An Intel i5-7400 has a 6MiB cache and costs $174.

That's a $5 difference or $1.66/MiB or about $1700/GiB.

7) Why are cache policies generally more complex at the bottom of the memory hierarchy?

Probably because moving at this level happens a lot less often and more informed decision can be made about what to move because it is less urgent.

8) Can you think of a strategy operating systems could use to avoid thrashing or recover when it occurs?

When there is a spike in increasing processes evicting each other one of the process could block other processes until the spike stops and the system is responsive.



