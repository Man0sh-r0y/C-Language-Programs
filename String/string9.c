/*Write a program to count the occurrence of a given character in a string.*/
#include<stdio.h>
#include<string.h>

int occurrence(char *ptr, char c);

int main()
{
    char arr[]= "Hii I am Manash Roy and I am a coder";
    int b = occurrence(arr, 'a');
    printf("The occurrence of the given character is %d",b);
    return 0;
}

int occurrence(char *ptr, char c)
{
    int var=0, i=0;
    while(ptr[i]!='\0')
    {
        if(ptr[i]==c)
        {
            var+=1;
        }
        i++;
    }
    return var;
}
