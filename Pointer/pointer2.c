/*Write a program having a variable i. Print the address of i. Pass this variable to
a function and print its address. Are these addresses same? Why*/

#include<stdio.h>
void func_adress(int a);
int main()
{
    int i=20;
    int *j=&i;
    printf("The adress of i is %u\n",(&i));
    func_adress(i);

    return 0;
}
void func_adress(int a)
{
    int *x;
    x=&a;
    printf("The adress of i is %u\n",x);
}
/*
OUTPUT: The adress of i is 6422296
        The adress of i is 6422272 
*/