// Write a program in C to find maximum occurring character in a string
#include <stdio.h>
void frequency(char *ptr);
int main()
{
    char sentence[100];
    printf("Enter the sentence: ");
    gets(sentence);
    frequency(sentence);
    return 0;
}
void frequency(char *ptr)
{
    char ch;
    int count = 0;
    printf("Enter whose frequency you want to know? ");
    scanf("%c", &ch);
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (ch == ptr[i])
        {
            ++count;
        }
    }
    printf("The highest frequency of Character %c is %d\n", ch, count);
}