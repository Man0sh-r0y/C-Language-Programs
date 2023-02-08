// Write a program in C to copy one string to another string
#include <stdio.h>
#include <string.h>
void userDifinedStrcpy(char *ptr2, char *ptr1);
int main()
{
    char stringOne[20] = "abcd";
    char stringTwo[20] = "efgh";
    int i = 0;
    userDifinedStrcpy(stringTwo, stringOne);
    while (stringTwo[i] != '\0')
    {
        printf("%c", stringTwo[i]);
        i++;
    }
    return 0;
}
void userDifinedStrcpy(char *ptr2, char *ptr1)
{
    int i = 0;
    while (*(ptr1 + i) != '\0')
    {
        *(ptr2 + i) = *(ptr1 + i);
        i++;
    }
}