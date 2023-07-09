/*Write a program using a function that calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/

#include<stdio.h>
int sum(int *a,int *b);
int average(int *a,int *b);
int main()
{
    int x=10,y=20;
    printf("The sum of %d and %d is %d\n",x,y,sum(&x,&y));
    printf("The average of %d and %d is %d\n",x,y,average(&x,&y));
    return 0;
}
int sum(int *a,int *b)
{
    int i=*a;
    int j=*b;
    return i+j;
}
int average(int *a,int *b)
{
    int i=*a;
    int j=*b;
    return (i+j)/2;
}