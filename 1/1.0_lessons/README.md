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


_Helpfull Resources:_

- [Pointers, visually explained | Code Words](https://www.youtube.com/watch?v=ZNjg_7nxsz4)

- 
