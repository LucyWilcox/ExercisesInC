## Homework 3

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

[Here is a link to the ex03 directory in my repository](https://github.com/LucyWilcox/ExercisesInC/tree/master/exercises/ex03)

### Think OS Chapter 4 reading questions

**Files and file systems**

1) What abstractions do file systems provide?  Give an example of something that is logically 
true about files systems but not true of their implementations.

The file system makes it seem like files are streams of input, but really they are block-based.

2) What information do you imagine is stored in an `OpenFileTableEntry`?

I imagine that it stores the file location, file position, write/read/append settings. 

3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage?

The OS will load whole 8KiB blocks at a time, because it take realitivly little addition time to loading a single byte. It will also prefetch blocks that thinks will be read soon. Similarly, the OS will make lots of changes to a block while it is in memory and will only write it to disk once when done. Lastly the OS will store recently/frequently used blocks in memory.

4) Suppose your program writes a file and prints a message indicating that it is done writing.  
Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the 
file you wrote is not there.  What happened?

The file was likely written to in memory, but not was never written to in persistent storage on the drive.

5) Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT?

FAT can store files that are so large a triple indirection block is too small. Because FAT is like a linked list, it's likely harder to change and move files.

6) What is overhead?  What is fragmentation?

Overhead is the data structures which are used for allocation of the data. Fragmentation is where blocks are unused or only partially used.

7) Why is the "everything is a file" principle a good idea?  Why might it be a bad idea?

It allows file handling functions to read and write data from anything which 'is a file', this allows for people to used a single interface between files. Though this consistency is good, it might be hard to fit every single application to this abstraction and it could make it harder for some applications to be built or fuction.

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.  
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then 
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).  
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).



