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
     * The compiler(cc1) translates the text file "~.i" into the text file "~.s", which contains an _assembly-language program_.
     * Each statement in an _assembly-language program_ describes one low-level machine-language instruction.
  3. Assembly Phase
     * The assembler(as) translates "~.s" into machine language instructions.
       * Packaged in a form _relocatable object program_
       * Results in the object file "~.o"
         * A binary file whose bytes encode machine-language instructions rather than characters.
  4. Linking Phase
      * The linker(ld) merges precompiled object files into our "~.o" files.
        * ex.) prinf() function resides in a separate precompiled object file called "printf.o".

<img src="">













Back to [main](https://github.com/JoonHyeok-hozy-Kim/coputer_systems_study#readme)