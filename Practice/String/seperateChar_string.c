// Write a program in C to print individual characters of string in reverse order.
#include <stdio.h>
#include <string.h>

int main()
{
    char word[20];
    printf("Enter your Word: ");
    scanf("%s", &word);
    int i = strlen(word);
    while (i >= 0)
    {
        printf("%c\n", word[i]);
        i--;
    }

    return 0;
}