// source : https://www.w3schools.com/c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int test(int inp1, char inp2){
    return(inp1 + (int) inp2);
};

int main(int argc, char const *argv[])
{
    printf("\nhello :) \n");

    int num1 = 23;
    int num2, num3 = 90; 
    num2 = 34;

    int* add_num1 = &num1;
    *add_num1 = 47; // chng var value using pointer

    char hello[] = "Hello World!"; // char array named hello
    // equivalent string/array of chars ;
    char str1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s ^_^\n", &str1[0]);

    printf("same address ? ");
    (str1 == &str1[0]) ? printf("yes!\n") : printf("no!\n");
    printf("mem addr1 : %p \n", &str1[0]);
    printf("mem addr2 : %p \n\n", *str1);
    // gives the value of str1[0] ie 'H' BUT in hexa.

    int arr1[] = {25, 50, 75, 100}; // len can be mentioned as arr1[4]
    // len : only for static arrays ;
    int length = sizeof(arr1) / sizeof(arr1[0]);
    printf("The length of arr1 is: %d\n\n", length);

    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    // Dynamic vs Static mem alloc, buffer vs heap
    char *dyn_str = (char*) malloc(4); // dynamic mem-alloc

    dyn_str[0] = 'h';
    dyn_str[1] = 'e';
    dyn_str[2] = 'y';
    dyn_str[3] = '\0';

    free(dyn_str); // release mem back to ram after use

    const float PI = 3.14;
    // gives error if we try to re-assign value

    printf("float size in bytes = %d\n",sizeof(float));

    struct Stu{
        int age;
        float gpa;
        char name[30];
    };

    struct Stu jake;
    jake.age = 20, jake.gpa = 3.99;
    strcpy(jake.name, "Jake Ryan");

    struct Stu john = {19, 3.7, "John jerome"};
    
    // printf with format specifiers ; req to output vars
    printf("hello agent %d, u have to do task %.2f\n", *add_num1, pow(num2, 2));
    
    int day = 4;

    switch (day) {
    case 6:
        printf("Today is Saturday");
        break;
    case 7:
        printf("Today is Sunday");
        break;
    // The default keyword : like else, must be used in the end
    default:
        printf("No Weekend :(\n");
    }

    // do-while loop;
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    }
    while (i < 3);

    // THE for loop :
    for (i = 0; i <= 5; i+=2) {
        printf("| %d ", i);
    }

    printf("\nsum = %d\n", test(2,'H'));
    // Create an int and a char variable
    int myNum;
    char myChar;

    // Ask the user to type a number AND a character
    // https://www.w3schools.com/c/c_user_input.php
    // printf("\n\nType a number `space` a character and press enter: \n");

    // Get and save the number AND character the user types
    // scanf("%d %c", &myNum, &myChar);

    // Print the number
    // printf("the Number is: %d and the char is %c\n", myNum, myChar);

    // the END of main
    return 0; // no error else 1
}
