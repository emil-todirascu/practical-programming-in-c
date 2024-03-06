# Problem Set 1

## Problem 1.1
*(a) What do curly braces denote in C? Why does it make sense to use curly braces to surround the body of a function?*

start and end of a series of statements, we use them so it's clear where the scope of an if,for etc. starts and ends 

✔️

*(b) Describe the difference between the literal values 7, "7", and ’7’.*

7 is an integer, while "7" and '7' are chars

⚠️ - The second describes a null-terminated string consisting of the character ’7’.

*(c) Consider the statement* `double ans = 10.0+2.0/3.0−2.0∗2.0;` *Rewrite this statement, inserting parentheses to ensure that ans = 11.0 upon evaluation of
this statement.*

`double ans = 10.0+2.0/((3.0−2.0)∗2.0);`

✔️

## Problem 1.2
*Consider the statement* `double ans = 18.0/squared(2+1);`
*For each of the four versions of the function macro squared() below, write the corresponding value of ans.*
1. `#define squared(x) x*x`
2. `#define squared(x) (x*x)`
3. `#define squared(x) (x)*(x)`
4. `#define squared(x) ((x)*(x))`

Answers:
1. ans = 18.0/2+1*2+1 = 12.0
2. ans = 18.0/(2+1*2+1) = 3.6
3. ans = 18.0/(2+1)*(2+1) = 18.0
4. ans = 18.0/((2+1)*(2+1)) = 2.0

✔️

## Problem 1.3
*Write the “Hello, 6.087 students” program described in lecture in your favorite text editor and compile and execute it. Turn in a printout or screen shot showing*
- *the command used to compile your program*
- *the command used to execute your program (using gdb)*
- *the output of your program*

1. gcc hello.c -o hello.o
2. gdb hello.o
3. 
```
GNU gdb (GDB) 14.1
Copyright (C) 2023 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-w64-mingw32".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from hello.o...
(gdb) r
Starting program: C:\Users\Emil\Desktop\VSC Projects\Practical Programming in C\learning-c\hello.o
[New Thread 10052.0x37a4]
Hello, 6.087 students
[Thread 10052.0x37a4 exited with code 0]
[Inferior 1 (process 10052) exited normally]
(gdb) q
```

✔️

## Problem 1.4
*The following lines of code, when arranged in the proper sequence, output the simple message “All your base are belong to us.”*
1. `return 0;`
2. `const char msg[] = MSG1;`
3. `}`
4. `#define MSG1 "All your base are belong to us!"`
5. `int main(void) {`
6. `#include <stdio.h>`
7. `puts(msg);`

*Write out the proper arrangement (line numbers are sufficient) of this code*

6, 4, 5, 2, 7, 1, 3

✔️

## Problem 1.5
*For each of the following statements, explain why it is not correct, and fix it.*

(a) `#include <stdio.h>;`

include statements shouldn't have a colon at the end, remove it to fix

✔️

(b) 
```c
int function(void arg1)
{
    return arg1-1;
}
```

arg1 can't be void, should be int

✔️

(c)
```c
#define MESSAGE = "Happy new year!"
puts(MESSAGE);
```

define shouldn't have "="

✔️