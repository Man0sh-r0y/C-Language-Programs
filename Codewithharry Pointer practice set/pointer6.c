/*Try problem 3 using call by value and verify that it doesn‗t change the value of
the said variable.
problem 3: Write a program to change the value of a variable to ten times its current value.
Write a function and pass the value by reference.*/
#include<stdio.h>
int change(int a);
int main()
{
    int val=10;
    printf("The value before changing variable is %d\n",val);
    change(val);
    printf("The value after changing variable is %d\n",val);

    return 0;
}
int change(int a)
{
    a*=10;
    return a;
}