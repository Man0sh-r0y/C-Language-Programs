#include<stdio.h>
#include<stdlib.h>
int avg(int a,int b,int c);
int main()
{
    int p,q,r;
    printf("Enter the 1st number: ");
    scanf("%d",&p);
    printf("Enter the 2nd number: ");
    scanf("%d",&q);
    printf("Enter the 3rd number: ");
    scanf("%d",&r);
    avg(p,q,r);
    return 0;
}
int avg(int a,int b,int c)
{
    float result;
    result=(a+b+c)/3;
    printf("\nThe average of %d,%d,%d =%.2f\n",a,b,c,result);
    return result;
}