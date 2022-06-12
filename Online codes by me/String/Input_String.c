// Write a program in C to input a string and print it.
#include <stdio.h>

int main()
{
    char stringInput[20];
    printf("Input the string: ");
    scanf("%s", &stringInput);
    printf("Your Entered string is: %s\n", stringInput);
    return 0;
}