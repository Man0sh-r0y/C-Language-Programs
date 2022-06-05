/*Write a program to read three integers from a file.*/
#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("manash.txt","r");
    int num, num1, num2;
    fscanf(ptr, "%d", &num);
    printf("%d\n",num);
    fscanf(ptr, "%d", &num1);
    printf("%d\n",num1);
    fscanf(ptr, "%d", &num2);
    printf("%d\n",num2);
    /*char c= fgetc(ptr);
    while(c!=EOF)
    {
        printf("%c",c);
        c= fgetc(ptr);
    }*/
    fclose(ptr);


    return 0;
}