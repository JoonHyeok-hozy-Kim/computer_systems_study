[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)

# Chapter 2. A Tour of Computer Systems

## 2.1 Information Storage
#### Terms.)
* bytes : 8 bits
* virtual memory : a very large array of bytes
* address : a unique number that identifies every byte of memory
* virtual address space : the set of all possible addresses
  * e.g.) The value of a pointer in C is the virtual address of the first byte of some block of storage.

### 2.1.1 Hexadecimal Notation
* How?)
  * Use digits 0\~9 and characters A\~F to represent 0\~16 possible values.
  * 8 bit representation
    1. Binary : 00000000(2) ~ 11111111(2)
    2. Decimal : 0(10) ~ 255(10)
    3. Hexadecimal : 00(16) ~ FF(16)
  * C Language Notation
    * Starts with "0x" or "0X"
    * e.g.) FA1D37B(16) = 0xFA1D37B = 0xfa1d38b

[:orange_book: Practice Problem 2.1](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems.md#practice-problem-21)

* Tech.) A tip for converting hexadecimal to decimal
  * If a decimal number of x is a power of two...
    * Convert power with the divisor and remainder of 4.
    * e.g.) 2^(11) = 2^(3 + 4*3) = 8 * 16^3 = 0x800
  * Else...
    * Continuously divide with 16 and use each remainder as the digit in reversed sequence.
    * e.g.) 314156(10) = 4CB2C(16)

<p align="left">
  <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/images/02_01_01_decimal_to_hexadecimal.png" width="30%">
</p>

[:orange_book: Practice Problem 2.2](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems.md#practice-problem-22)

[:orange_book: Practice Problem 2.3](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems.md#practice-problem-23)

[:orange_book: Practice Problem 2.4](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems.md#practice-problem-24)


### 2.1.2 Words
* Def.) word size
  * It indicates the normal size of integer and pointer data
* Prop.)
  * Virtual Address is encoded by such a word
    * Thus, the most important system parameter determined by the word size is the maximum size of the virtual address space.
      * e.g.) 32-bit : 4 byte
      * e.g.) 64-bit : 8 byte


### 2.1.3 Data Sizes

<p align="left">
  <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/images/02_01_03_data_sizes.png" width="30%">
</p>

* C Language 
  * Data types that use the full word size of the machine : 32-bit / 64-bit
    * long long int
    * pointer


### 2.1.4 Addressing and Byte Ordering
* Concept) Convention Establishment
  1. What the address object will be?
  2. How we will order the bytes in memory?

* Example)
  * Suppose an integer variable *x* with...
    * address *&x* : 0x100
    * value : 0x01234567
    * size : 4 bytes (In case of long int in 64-bit machine or long long int, the size will be 8 bytes.)
  * Then 4 bytes of *x* would be contiguously stored in memory locations : 0x100, 0x101, 0x102, and 0x103.
  * In bit representation, [ x31, x30, x29, ... , x2, x1, x0 ]
    * which can be grouped by bytes : [ x31, x30, ... , x24 ], [ x23, x22, ... , x16 ], ... , [ x7, x6, ... , x0 ]
    * Term.)
      * Most significant byte : [ x24, x25, ... , x31 ]
      * Least significant byte : [ x0, x1, ... , x7 ]

* Concept) Little Endian
  * Def.) Machines choose to store objects in memory ordered from least significant byte to most
  * Usages : most Intel-compatible machines

* Concept) Big Endian
  * Def.) Machines choose to store objects in memory ordered from most significant byte to least
  * Usages : most machines from IBM and Sun Microsystems

<p align="left">
  <img src="https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/images/02_01_04_little_vs_big_endian.png" width="30%">
</p>

* Concept) Bi Endian
  * Def.) Configured to operate as either little- or big- endian.

* Analysis) Cases when byte ordering can be issue to programmers
  1. When binary data are communicated over a different machines.
  2. Machine level program inspection
  3. When programs are written that circumvent the normal type system : [Test](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/programs/nt_02_01_04_print_tye_byte.c)

[:orange_book: Practice Problem 2.5](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems.md#practice-problem-25)

[:orange_book: Practice Problem 2.6](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems.md#practice-problem-26)

### 2.1.5 Representing Strings
* Concept) String in C
  * Encoded by an array of characters
  * Terminated by the null character : '\0'
  * Props.
    * ASCII code for decimal digit number *n* is 0x3*n*.
      * e.g.) '0' : 0x30, '1' : 0x31, '2' : 0x32, ...
    * ASCII code for the null character is 0x00.
    * 
[:orange_book: Practice Problem 2.7](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study/blob/main/contents/ch_02/problems/practice_problems.md#practice-problem-27)



### KEYWORDS
* words; data size; addressing; byte ordering; little endian; big endian; bi endian;



[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)