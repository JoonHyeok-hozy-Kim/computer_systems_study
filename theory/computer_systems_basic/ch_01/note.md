[Back to index](../main.md)

# Chapter 1. A Tour of Computer Systems  

## 1.1 Information Is Bits + Context
#### Concept) source program
* a program written by a programmer with an editor
* a sequence of bits, organized in 8-bit chunks called bytes
* Each text character is represented by ASCII standard.

#### Concept) context
* In different contexts, the same sequence of bytes might represent different objects.
* ex.) char, integer, float, machine instructions

---

## 1.2 Programs Are Translated by Other Programs into Different Forms

#### Concept) executable object program
* A form of packaged instructions in low-level machine language.
* A source program must be translated into a sequence of low-level machine language, packaged in a form of _executable object program_, and stored as a binary desk file.

#### Concept) compilation system
* Four Sequential phases that a source file being translated into _executable object file_
* Phases
  1. Preprocessing Phase
     * The preprocessor(cpp) modifies the original C program according to directives that begin with # character.
       * ex.) #include <stdio.h> tells preprocessor to...
         1. Read the contents of the system header file "stdio.h"
         2. Insert it directly into the program text
         3. Result in another C program with .i suffix
  2. Compilation Phase
     * The compiler(cc1) translates the text file "\~.i" into the text file "\~.s", which contains an _assembly-language program_.
     * Each statement in an _assembly-language program_ describes one low-level machine-language instruction.
  3. Assembly Phase
     * The assembler(as) translates "\~.s" into machine language instructions.
       * Packaged in a form _relocatable object program_
       * Results in the object file "\~.o"
         * A binary file whose bytes encode machine-language instructions rather than characters.
  4. Linking Phase
      * The linker(ld) merges precompiled object files into our "\~.o" files.
        * ex.) prinf() function resides in a separate precompiled object file called "printf.o".

<img src="./images/01_01_01_compilation_system.png">

---

## 1.3 It Pays to Learn How Compliation System Work
#### Prop.) Advantage of understanding how compliations system works
* Optimizing program performance
* Understanding link-time errors
* Avoiding security holes

---

## 1.4 Processors Read and Interpret Instructions Stored in Memory
#### Concept) shell
* An application program of UNIX
* A command-line interpreter that prints a prompt, waits for the input in the command-line, and then performs the command.
  
### 1.4.1 Hardware Organization of a System
<img src="./images/01_04_01_hardware_organization_of_system.png">

#### Concept) Buses
* A collection of electrical conduits
* They carry bytes of information back and forth between the components
* Typically designed to transfer fixed-sized chunks of bytes known as _words_.
  * Number of bytes in a _word_.
    * 32bit = 4byte
    * 65bit = 8byte

#### Concept) I/O Devices
* The system’s connection to the external world
* ex) Keyboard, Mouse, Display, Disk Drive, etc
* Each I/O devices are connected to the I/O buses by either a controller or an adapter
  * Concept) Controller
    * Chipsets in the device itself or on the motherboard
  * Concept) Adapter
    * A card that plug into a slot on the motherboard

#### Concept) Main Memory
* A temporary storage device
* It holds both a program and the data it manipulates while the processor is executing a program
* Physically consists of a collection of _dynamic random access memory (DRAM)_.
* Logically organized as a linear array of bytes, each with its own unique address.

#### Concept) Processor (A.K.A. Central Processing Unit or CPU)
* Def.) An engine that interprets instructions stored in main memory
* Components
  1. Program Counter (PC)
      * A word sized device (or register)
      * Located at the CPU's core
      * At any time points at some machine-language instruction in main memory
  2. Register File
      * A small storage device that consists of a collection of word-sized registers, each with own unique name
  3. Arithmetic/Logic Unit (ALU) 
      * A unit that computes new data and address values
* CPU's Jobs)
  * Reads the instruction in the memory pointed by PC 
  * Interprets the bits in the instruction 
  * Performs some simple operation dictated by the instruction
  * Updates the PC to the next instruction
* CPU's Operations
  1. **Load** : Copy a byte or a word from main memory into a register, overwriting
the previous contents of the register.
  1. **Store** : Copy a byte or a word from a register to a location in main memory, overwriting the previous contents of that location.
  2. **Operate** : Copy the contents of two registers to the ALU, perform an arithmetic operation on the two words, and store the result in a register, overwriting the previous contents of that register.
  3. **Jump** : Extract a word from the instruction itself and copy that word into the program counter (PC), overwriting the previous value of the PC.

---

## 1.5 Caches Matter
#### Concept) cache memory
* Def.) A temporary staging area for information that the processor is likely to need in the near future
* Prop.) Faster speed thanks to *locality*
  * Smaller but faster than main memory
  * Larger but slower than processor
* Types.) Implemented with *static random access memory*
  1. L1 : Faster than L1
  2. L2 : Larger than L2, faster than L3
  3. L3 : Larger than L3

---

## 1-6 Storage Devices Form a Hierarchy
#### Concept) Memory Hierarcy
* Ranking
  * L0 : register file
  * L1 ~ L3 : caches
  * L4 : memory
* Prop.)
  * High vs Low
    * Higher Hierarchy : faster, smaller capacity, costly per byte
    * Lower Hierarchy : slower, larger capacity, less costly per byte
  * Storage at one level serves as a cache for the next level

<p align="center">
  <img src="./images/01_06_01_memory_hierarchy.png" width="60%">
</p>

---

## 1.7 The Operating System Manages the Hardware
#### Concept) Operating System
* Def.) A layer of software interposed between the application program and the hardware
* Props.) Purposes of OS
  1. Protect HW from misuse by runaway programs
  2. Provide applications with simple and uniform mechanisms for manipulating low-level devices
* Props.) Abstraction of HW by OS
  1. I/O devices - Files
  2. Main memory - Virtual memories
  3. Processor - Processes

<p align="left">
  <img src="./images/01_07_01_hw_abstraction_by_os.png" width="40%">
</p>

### 1.7.1 Processes
* Def.) A process is the OS's abstraction for a running program
* Prop.)
  * Each process appears to have exclusive use of the HW.
  * Tech.) context switch
    * A mechanism that a single core CPU can appear to execute multiple processes simultaneously by the OS

### 1.7.2 Threads
* Def.) Multiple execution units, each running in the context of the process and sharing the same code and global data
  
### 1.7.3 Virtual Memory
* Def.) An abstraction that provides each process with the illusion that it has exclusive use of the main memory

<p align="center">
  <img src="./images/01_07_02_virtual_memory.png" width="50%">
</p>

### 1.7.4 Files
* Def.) A sequence of bytes.
* Prop.)
  * Every I/O device is modeled as a file.
    * ex.) disks, keyboards, displays, networks, etc

---

## 1.8 Systems Communicate with Other Systems Using Networks

---

## 1.9 Important Themes
### 1.9.1 Concurrency and Parallelism
* A.K.A : "Do more and Faster"
* Concept) concurrency : a system with multiple, simultaneous activities
* Concept) parallelism : the use of concurrency to make a system run faster

#### Tech.) Parallelism exploited at three levels of abstraction
1. Thread-Level Concurrency
2. Instruction-Level Concurrency
3. Single-Instruction, Multiple-Data (SIMD) Parallelism
  
### 1.9.2 The Importance of Abstractions in Computer Science



[Back to index](../main.md)