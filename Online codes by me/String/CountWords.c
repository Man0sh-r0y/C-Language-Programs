// Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
int CountWords(char *ptr);
int main()
{
    char sentence[100];
    printf("Enter your sentence: ");
    gets(sentence);
    printf("There are %d words in your sentence\n", CountWords(sentence));
    return 0;
}
int CountWords(char *ptr)
{
    int wordsCount = 0, i = 0;
    while (i < strlen(ptr))
    {
        if (*(ptr + i) == 32)
        {
            if (ptr[i] == 32 && ptr[i + 1] != 32)
            {
                wordsCount += 1;
            }
        }
        i++;
    }
    return wordsCount + 1;
}
