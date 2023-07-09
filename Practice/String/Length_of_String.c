// Write a program in C to find the length of a string without using library function.
#include <stdio.h>
int lengthString(char *ptr);

int main()
{
    char word[20];
    printf("Enter a Word: ");
    scanf("%s", &word);
    printf("The length of Your word is: %d\n", lengthString(word));

    return 0;
}
int lengthString(char *ptr)
{
    int length = 0;
    while (*ptr != '\0')
    {
        length += 1;
        ptr++;
    }
    return length;
}