/* Write a program in C to count total number of alphabets,
digits and special characters in a string */
#include <stdio.h>
void countChar(char *ptr);
int main()
{
    char sentence[100];
    printf("Enter your String: ");
    gets(sentence);
    countChar(sentence);
    return 0;
}
void countChar(char *ptr)
{
    int i = 0, countAlphabet = 0, countDigit = 0, countSpecialChar = 0;
    while (ptr[i] != '\0')
    {
        if (ptr[i] >= 'a' && ptr[i] <= 'z' || ptr[i] >= 'A' && ptr[i] <= 'Z')
        {
            countAlphabet += 1;
        }
        else if (ptr[i] >= '1' && ptr[i] <= '9')
        {
            countDigit += 1;
        }
        else
        {
            countSpecialChar += 1;
        }
        i++;
    }
    printf("There are %d Alphabets in the Given String\n", countAlphabet);
    printf("There are %d Digit in the Given String\n", countDigit);
    printf("There are %d Special Character in the Given String\n", countSpecialChar);
}