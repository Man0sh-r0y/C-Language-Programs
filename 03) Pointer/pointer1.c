/*Write a program to print the address of a variable. Use this address to get the
value of this variable.*/
#include<stdio.h>
int main()
{
    int a=4;
    int *j=&a;
    printf("The adress of a is %u\n",j);
    printf("The value of a is %d\n",*(&a));


    return 0;
}













