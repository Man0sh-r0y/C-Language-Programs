#include<stdio.h>
#include<string.h>

void len_str(char a[]);


int main()
{
    char a[100];
    printf("Enter the string input: ");
    scanf("%s",a);
    len_str(a);
    return 0;
}

void len_str(char a[])
{
    printf("The length of the string is %d\n",strlen(a));
}
