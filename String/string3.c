/*Write your own version of strlen function from <string.h>*/
#include<stdio.h>
#include<string.h>

int len_str_method_1(char arr[]);
int len_str_method_2(char arr[]);

int main()
{
    char str[]= "Manash";
    printf("The length of the string is: %d\n",len_str_method_1(str));
    printf("The length of the string is: %d\n",len_str_method_2(str));
    return 0;
}

int len_str_method_1(char arr[])
{
    return strlen(arr);
}
int len_str_method_2(char arr[])
{
    char *ptr= arr;
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;
}
