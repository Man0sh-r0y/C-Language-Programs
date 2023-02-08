/*Write a program to take a string 
as an input from the user using %c and %s.
Confirm that the strings are equal*/
#include<stdio.h>
#include<string.h>

int main()
{
    char st1[100];
    char st2[100];
    int i=0;
    char c;
    printf("Enter the string in st1: ");
    scanf("%s",st1);
    printf("Enter the string in st2: ");
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("Your inputted string is %s\n",st1);
    printf("Your inputted string is %s\n",st2);

    return 0;
}