/*Write a program to encrypt a string by adding 1 to the ASCII value of its
characters.*/

#include<stdio.h>

void encrypt(char *ptr);

int main()
{
    char st[]="Come to the Secret Room";
    encrypt(st);
    printf("The encrypted string is: %s\n",st);

    return 0;
}

void encrypt(char *ptr)
{
    while(*ptr!='\0')
    {
        *ptr= *ptr + 1;
        ptr++;
    }
}