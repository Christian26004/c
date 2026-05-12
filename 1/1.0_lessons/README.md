# What is a computer based off first principles 

- A super fancy calculator that has a place to store numbers.
- RAM: holds numbers
- CPU: performs computation

> Ram is made up of 1's and 0's (on/off) states called bits, combining 8 bits together creates a single byte and the ram function like a list of bytes.

Inside a byte you can store information, such as numbers (data types) char, short, int, long, float and double. In C a char is 1 byte, short is 2 bytes, int is 4 bytes, long is 8 bytes, a float is 4 bytes and a double is 8 bytes. floats and doubles are called real types and the other are called integer types, due to the float and double allowing for decimal computation, which can lead to an approximation rather than a certainty and a different way of encoding memory.

## Assigning a variable in relation to memory

how RAM sees an integer datatype

int nb = 42; -> 0b 00101010 00000000 00000000 00000000 

0 = 1

1 = 2

0 = 4

1 = 8

0 = 16

1 = 32

0 = 64

0 = 128

2 + 8 + 32 = 42

So, inside RAM/memory 01010100 will be stored in a memory address. Every time you use that value the CPU must reference that memory address, if the memory address is not located at that point in memory the CPU must either make a copy of that memory address before losing it (such as calling a variable from a function) or you must create a pointer that tells the computer where in memory to find the original address so it may be changed.

> Some languages such as Java assume for you were a pointer will be located, in C you must do it all manually. This creates the ability to optimize your code much more but may also lead to more bugs in the future.

The operating system is the king, it's the master program that control almost everything.

A function is like a magic box that takes an input interprets the funcitons logic and produces an output. The same way a function works in mathematics. 

In C, for example, the printf function exists in stdio, it takes an input ("Hello, World") computes the logic inside the function and tell the operating system how to output Hello, World to stdout. Just like how printf works all of the code that exists inside of your C files work the same way.

the example of stdio is an example of an API (Application Programming Interface) so you don't have to write the logic for the printf function yourself everytime. 

If the operating system is the king, the main() function could be viewed as a queen, the main function is the first function ran in your program and thus has the job of starting the first function calls in your program. 

main() -> add() -> main() -> sub() -> mult() -> ... 

How does memory store your data in a program?

When a process is ran it creates the heap, and the stack. the heap is a the top of the allocated memory, and the stack is at the bottom of allocated memory. 
_Helpfull Resources:_

- [Pointers, visually explained | Code Words](https://www.youtube.com/watch?v=ZNjg_7nxsz4)

- 
