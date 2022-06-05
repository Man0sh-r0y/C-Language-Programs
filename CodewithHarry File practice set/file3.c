/*Write a program to read a text file character by character and write its content
twice in a separate file.*/
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("manash.txt","r");
    char c=fgetc(ptr);
    while(c!= EOF)
    {
        printf("%c",c);
        c=fgetc(ptr);
    }

    return 0;
}   