/* Write a c program to find the length of given string without using
inbuilt string handling function*/
#include <stdio.h>
int userDefinedStrlen(char *ptr);
int main()
{
    char string[50];
    printf("Enter the string: ");
    gets(&string[0]);
    printf("The length of the string is %d\n", userDefinedStrlen(&string[0]));

    return 0;
}
int userDefinedStrlen(char *ptr)
{
    int countLength = 0;
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        if (*(ptr + i) != 32) // or we can write (*ptr+i)!=' '
        {
            countLength += 1;
        }
    }
    return countLength;
}