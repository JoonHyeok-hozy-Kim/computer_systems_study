Back to [main](https://github.com/JoonHyeok-hozy-Kim/coputer_systems_study#readme)

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

#### Concept) compliateion system
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

<img src="https://github.com/JoonHyeok-hozy-Kim/coputer_systems_study/blob/main/contents/ch_01/images/01_01_01_compilation_system.png">

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
<img src="https://github.com/JoonHyeok-hozy-Kim/coputer_systems_study/blob/main/contents/ch_01/images/01_04_01_hardware_organization_of_system.png">

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
* An engine that interprets instructions stored in main memory
  









Back to [main](https://github.com/JoonHyeok-hozy-Kim/coputer_systems_study#readme)