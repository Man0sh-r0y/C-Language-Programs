// Write a C program to check the given string is palindrome or not.
#include <stdio.h>
#include <string.h>
void reverseString(char *ptr);
int main()
{
    char string[20], storeString[20];
    int i = 0;
    printf("Enter the String: ");
    scanf("%s", string);
    while (string[i] != '\0')
    {
        storeString[i] = string[i];
        i++;
    }
    storeString[i] = '\0';
    reverseString(string);
    if (strcmp(storeString, string) == 0)
    {
        printf("The string is Palindrome.\n");
    }
    else
    {
        printf("The string isn't Palindrome.\n");
    }

    return 0;
}
void reverseString(char *ptr)
{
    char temp;
    for (int i = 0; i < strlen(ptr) / 2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[strlen(ptr) - i - 1];
        ptr[strlen(ptr) - i - 1] = temp;
    }
}