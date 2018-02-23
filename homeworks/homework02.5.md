## Homework 2.5

### C Exercises

Modify the link below so it points to the `ex02.5` directory in your
student repository.

[Here is a link to the ex02.5 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex02.5)

### Think OS Chapter 2.5 reading questions

### Virtual memory

1) The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?

6 bits bits because 2^5 is 32 which is not enough and 2^6 is 64 which is enough.

2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.  
Ignoring the details of the encoding scheme, how many different characters can be represented?

2^32

3) What is the difference between "memory" and "storage" as defined in *Think OS*?

Memory is volatile and will be lost in the computer is shut down or the process ends, storage is not and is stored more permantly on an HDD of SSD.

4) What is the difference between a GiB and a GB?  What is the percentage difference in their sizes?

A GB is 10^9 bytes (base 10) and a GiB is 2^30 bytes (base 2, used for memory units). A GiB is about 7.37% larger than an GB.

5) How does the virtual memory system help isolate processes from each other?

Virtual memory allows processes to not deal with physical addresses, even if two programs use the same virtual address the operating system will use different physical addresses. Processes cannot generate virtual address which map to physical addresses being used by other processes. 

6) Why do you think the stack and the heap are usually located at opposite ends of the address space?

The stack and heap grow in opposite dirrections so when they are at different ends of the address space they will grow towards each other. This maximizes space because you won't have a situation where the stack or heap is out of memory when the other still has space.

7) What Python data structure would you use to represent a sparse array?

A dictionary where tuples of virtual locations map to a single physical location.

8) What is a context switch?

A context switch involves the OS interrupting a running process, saving its state, and then running a different process.
