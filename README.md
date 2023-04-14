**Computer Science Practice and Experience: Development Basics**
Acquiring familiarity with professional software development settings via practical experience with interaction with UNIX-like systems, programming in C, with documentation, testing, benchmarking, profiling and debugging; shell interaction and programming, pipes and filters; revision control. Two lectures, two labs (two hours each); second term
Prerequisite(s): One of COMPSCI 1MD3 or ENGINEER 1D04 Antirequisite(s): COMPENG 2SH4, COMPSCI 1XA3, 2XA3, 2S03, SFWRENG 2MP3, 2S03, 2XA3.

### Programming in C
https://www.w3schools.com/c
[C Dynamic Memory Allocation](https://www.programiz.com/c-programming/c-dynamic-memory-allocation)
Good to know :
- Statically typed, low level language providing low-level control.
- Procedural language, does NOT support OOP features but we can create our own data types using `struct`
- In C programming language, the `^` operator is not used to calculate the power of a number. Instead, it is the bitwise XOR operator.
  On the other hand, the `**` operator is not a valid operator in C. It is used in some other programming languages, but not in C.
  To calculate the power of a number in C, you should use the pow() function from the `#include <math.h>` library.
- in the `main()` func, `return 0;` implies no error and 1 means error.
- Logical operators are `||, &&, !` unlike python where the keyword it word itself.
- In C, the `bool` type is not a built-in data type, like `int` or `char`. We have to import the header file to use it `#include <stdbool.h>`.
- Ternary operator `int time = 20; (time < 18) ? printf("Good day.") : printf("Good evening.");`
- for strings in C, we have 2 methods to get their length, `strlen(str1)` which requires the `#include <string.h>` library and the returns the actual length of the string ie. without the `\0` symbol and the `sizeof(str1)` method which returns the size with the null terminating character.
- It is also important that you know that `sizeof` will always return the memory size (in bytes which we specify during declaration as `char str1[50]`), and not the actual string length which is the no. of the chars actually present in the string.
- Concatenate str2 to str1 (result is stored in str1) `strcat(str1, str2);`. Note that the size of `str1` should be large enough to store the result of the two strings combined. Similar rule for `strcpy(str1, str2);`
- `printf("mem addr2 : %p \n\n", *str1);` gives the value of `str1[0]` ie 'H' BUT in hexa. so ascii('H') = 72 = 0x48.
- Use the `scanf()` function to get a single word as input, and use `fgets()` for multiple words.
- so if i get a mem address lets say 0x49 for str1 today, when i turn on my device tomorrow, it might no longer be 0x49 ?
  That's correct. The memory address assigned to a variable is not permanent and can change each time you run the program or restart the device. The operating system decides where in memory to allocate the variable, and other programs running on the same device may also be using memory, so the available memory addresses can change over time. However, once the variable is assigned a memory address during program execution, that address will remain constant for the duration of the program's execution.
- `myNumbers + 1` points to the memory location of the second element in the array. When you use the `+` operator with a pointer, it increments the memory address by the **size of the data type** that the pointer is pointing to. In this case, since `myNumbers` is an `int*` pointer, adding `1` to it increments the memory address by `sizeof(int)`, which is usually 4 bytes on most modern systems. So `myNumbers + 1` points to the memory location of the second integer in the array. `*(myNumbers + 1)` then dereferences this memory location and returns the value stored there, which is the second element of the array. 
-   `int myNumbers[5] = {25, 50, 75, 100, 'H'};` is **not** incorrect, the element at index 4 is 72.
-   `char str2[]; str2 = "hello";` will cause errors. Instead we have use `strcpy()`.


### CLI with UNIX

### Version Control
- Generate token [Personal Access Tokens (Classic) (github.com)](https://github.com/settings/tokens)
- use token instead of password
- Might not work for the first time, try clearing and re-try.
