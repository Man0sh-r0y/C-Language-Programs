#include<stdio.h>
int main()
{
    //Finding palindrome number in a given Range
    int num,d,rev,term,r1,r2;
    printf("Enter the range 1: ");
    scanf("%d",&r1);
    printf("Enter the range 2: ");
    scanf("%d",&r2);
    num=r1;
    printf("The Palindrome numbers are: ");
    while(num<=r2)
    {
        term=num;
        rev=0;
        
        while(num!=0)
        {
            d=num%10;
            rev=rev*10 + d;
            num/=10;
        }
        num=term;
        if(rev==term)
        {
            printf("%d, ",term);
        }
        num++;
    }
    printf("\b\b ");
    
    return 0;
}