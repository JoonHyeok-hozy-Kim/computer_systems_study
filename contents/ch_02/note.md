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


### 2.2.2 Words




[Back to main](https://github.com/JoonHyeok-hozy-Kim/computer_systems_study#readme)