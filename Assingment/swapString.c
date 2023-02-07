// Write a C program to swap the two strings .
#include <stdio.h>
#include <string.h>
void swapString(char *ptr1, char *ptr2);
int main()
{
    char string1[20], string2[20];
    printf("Enter the 1st String: ");
    scanf("%s", string1);
    printf("Enter the 2nd String: ");
    scanf("%s", string2);
    printf("Before swaping The two string is %s and %s\n", string1, string2);
    swapString(string1, string2);
    printf("After swaping The two string is %s and %s\n", string1, string2);

    return 0;
}
void swapString(char *ptr1, char *ptr2)
{
    for (int i = 0; i < strlen(ptr1) + strlen(ptr2); i++)
    {
        char temp = ptr1[i];
        ptr1[i] = ptr2[i];
        ptr2[i] = temp;
    }
}