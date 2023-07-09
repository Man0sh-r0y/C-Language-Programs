/*Write a program to print the value of a variable i by using the "pointer to
pointer" type of variable.*/
#include<stdio.h>
int main()
{
    int i=45;
    int *j=&i;
    int **k=&j;
    printf("The value of i is %d\n",**k);

    return 0;
}