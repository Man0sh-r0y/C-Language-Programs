/*Write a program to take a string as an input from the user using %c and %s.
Confirm that the strings are equal*/
#include<stdio.h>

int main()
{
    char str[100];
    int i=0;
    printf("Enter the string: ");
    scanf("%c",&str[0]);
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

    return 0;
}