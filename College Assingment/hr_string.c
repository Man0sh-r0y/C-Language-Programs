#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /*char ch;
    char st1[30];
    char s[34];
    char c;
    printf("Enter charachter: ");
    scanf("%c",&ch);
    printf("Enter the string: ");
    scanf("%s",st1);
    fflush(stdin);
    printf("Enter Sentence: ");
    gets(s);
    printf("%c, %s\n",ch,st1);
    puts(s);
    /*char s[34];
    printf("enter name: ");
    gets(s);
    puts(s);*/
    char ch;
    printf("Enter charachter: ");
    scanf("%c", &ch);
    printf("%c\n", ch);
    char s[50];
    printf("Enter the string: ");
    scanf("%s",s);
    printf("%s\n",s);
    char sen[50];
    fflush(stdin);
    printf("Enter Sentence: ");
    gets(sen);
    puts(sen);
    
    return 0;
}