/*Write a program to check whether a given character is present in a string or
not.*/
#include<stdio.h>

void checking_char(char *ptr, char c);

int main()
{
    char arr[]="Manash_Roy";
    char var;
    printf("Enter the character: ");
    scanf("%c",&var);
    checking_char(arr,var);

    return 0;
}

void checking_char(char *ptr, char c)
{
    int i=0;
    while(*ptr!='\0')
    {
        if(ptr[i]== c)
        {
            printf("Entered character is present in the string.\n");
            break;
        }
        else
        {
            printf("Entered character isn't present in the string.\n");
            break;
        }
        i++;
    }
}