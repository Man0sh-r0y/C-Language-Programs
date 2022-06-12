// Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
#include <string.h>
int main()
{
    char word_1[20] = "abgh", word_2[20] = "@ghjasghvh";
    printf("%d\n", strcmp(word_1, word_2));

    return 0;
}