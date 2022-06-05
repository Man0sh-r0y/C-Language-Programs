/*Write a program to decrypt the string encrypted using the encrypt function.*/

#include<stdio.h>

void decrypt(char *ptr);

int main()
{
    char st[]="Dpnf!up!uif!Tfdsfu!Sppn";
    decrypt(st);
    printf("The decrypted string is: %s\n",st);

    return 0;
}

void decrypt(char *ptr)
{
    while(*ptr!='\0')
    {
        *ptr= *ptr - 1;
        ptr++;
    }
}