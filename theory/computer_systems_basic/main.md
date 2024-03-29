[Back to Computer Systems main](../../README.md)

# Basic Theory
#### based on the textbook, "Computer Systems, A Programmer's Perspective"

## Index

### Ch 1. [A Tour of Computer Systems](./ch_01/note.md)

### Ch 2. [Representing and Manipulating Information](./ch_02/note.md)
|Sub Chapter |Keywords|
|:-----------|:-------|
|[2.1 Information Storage](./ch_02/notes/01.md)| words; data size; addressing; byte ordering; little endian; big endian; bi endian; boolean; bit-level operations; in-place swap; bit-masking; logical operations; shift operations; logical right shift; arithmetic right shift;|
|[2.2 Integer Representations](./ch_02/notes/02.md)| integral data types; unsigned encodings; bijection; two's-complement encodings; zero extension; sign extension; truncation;|
|[2.3 Integer Arithmetic](./ch_02/notes/03.md)| unsigned addition; modular addition; overflow; abelian group; additive inverse; two's-complement addition; positive overflow; negative overflow; two's-complement negation; -x = ~x + 1; two's-complement multiplication; multiplication by constants; dividing by powers of two;|
|[2.4 Floating Point](./ch_02/notes/04.md)| fractional binary numbers; binary point; IEEE floating-point standard; single precision format; double precision format; exponent part; fractional binary part; significand(정수부); normalized value; implied leading one(1); denormalized value; special value; gradual underflow; Not a Number(NaN); round-to-even; round-toward-zero; round-down; round-up; floating-point addition; floating-point multiplication; float data type; double data type; long double data type(C99); casting between float/double and int;|
* [Practice Problems](./ch_02/problems/practice_problems.md)
* [Homework Problems](./ch_02/problems/hw_problems.md)  


### Ch 3. [Machine-Level Representation of Programs](./ch_03/note.md)
|Sub Chapter |Keywords|
|:-----------|:-------|
|[3.1 A Historical Perspective](./ch_03/notes/01.md)|8086; 80286; i386; i486; Pentium; Core 2; Core i7; IA32; x86-64;|
|[3.2 Program Encodings](./ch_03/notes/02.md)|machine-level code; instruction set architecture(ISA); program counter(IA32); integer register file; condition code registers; floating-point registers; program memory; gcc; disassembler; optimization; ATT assembly-format; Intel assembly-format;|
|[3.3 Data Types](./ch_03/notes/03.md)|data types; words; double words; quad words; extended-precision; assembly-code suffix;|
|[3.4 Accessing Information](./ch_03/notes/04.md)|register; operands; immediate; memory reference; effective address; addressing modes; immediate offset; base register; index register; scale factor; data movement instruction; instruction class; program stack;|
|[3.5 Arithmetic and Logical Operations](./ch_03/notes/05.md)|leal(load effect address); leal; unary operation; incl; decl; binary operation; add; sub; imul; shift operation; sal; shl; sar; shr; "xor" vs "mov 0"; full 64-bit product of two 32-bit numbers; mull; imull; integer division; idvl; cltd;|
|[3.6 Control](./ch_03/notes/06.md)|condition code; carry flag; zero flag; sign flag; overflow flag; comparison instructions (CMP); test instructions (TEST); SET Instructions; jump instruction; label; direct jump; indirect jump; encodings for jump; PC relative (Program Counter Relative); goto code; do-while loop; while loop; for loop; conditional transfer of control; conditional transfer of data; conditional move; switch statement; jump table; rodata(Read Only Data);|
|[3.7 Procedures](./ch_03/notes/07.md)|procedure; program stack; stack frame; frame pointer; stack pointer; allocation; deallocation; return address; call; ret; leave; caller-save registers; callee-save registers;|
|[3.8 Array Allocation and Access](./ch_03/notes/08.md)|array; nested array; fixed-size arrays; variable-size arrays; register spilling;|
|[3.9 Heterogeneous Data Structures](./ch_03/notes/09.md)|struct; union; alignment restriction;|
|[3.10 Understanding Pointers](./ch_03/notes/10.md)|pointer; function pointer(functor);|
|[3.11 GDB Debugger](./ch_03/notes/11.md)|GDB Debugger;|
|[3.12 Out-of-Bounds Memory References and Buffer Overflow](./ch_03/notes/12.md)|out-of-bounds error; buffer overflow; buffer overflow attack; exploit code; stack randomization; security monoculture; address-space layout randomization(ASLR); nop sled; stack corruption detection; stack protector; canary value(guard value); segmented addressing;|
|[3.13 x86-64](./ch_03/notes/13.md)||
* [Practice Problems](./ch_03/problems/practice_problems.md)
* [Homework Problems](./ch_03/problems/hw_problems.md)   


### Ch N. [new_chapter](./ch_nn/note.md)
|Sub Chapter |Keywords|
|:-----------|:-------|
|[N.1 sub_chapter](./ch_03/notes/01.md)||
|||
|||
|||

[Back to Computer Systems main](./main.md)