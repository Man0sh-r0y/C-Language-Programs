// Write a program in C to count total number of vowel or consonant in a string.'
#include <stdio.h>
void vowelConsonantsFind(char *ptr);
int main()
{
    char sentence[100];
    printf("Enter the sentence: ");
    gets(sentence);
    vowelConsonantsFind(sentence);
    return 0;
}
void vowelConsonantsFind(char *ptr)
{
    int countConsonants = 0, countVowels = 0, i = 0;
    while (ptr[i] != '\0')
    {
        if (ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u' || ptr[i] == 'A' || ptr[i] == 'E' || ptr[i] == 'i' || ptr[i] == 'O' || ptr[i] == 'U')
        {
            countVowels += 1;
        }
        else if (ptr[i] > 'a' && ptr[i] <= 'z' || ptr[i] > 'A' && ptr[i] <= 'Z')
        {
            countConsonants += 1;
        }
        i++;
    }
    printf("There are %d vowels in the given String\n", countVowels);
    printf("There are %d Consonants in the given String\n", countConsonants);
}
