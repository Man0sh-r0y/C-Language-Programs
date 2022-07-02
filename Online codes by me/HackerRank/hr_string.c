#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter charachter: ");
    scanf("%c", &ch);
    printf("%c\n", ch);
    char s[50];
    printf("Enter the string: ");
    scanf("%s", s);
    printf("%s\n", s);
    char sen[50];
    fflush(stdin);
    printf("Enter Sentence: ");
    gets(sen);
    puts(sen);

    return 0;
}