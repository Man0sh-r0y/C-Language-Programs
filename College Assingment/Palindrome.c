#include<stdio.h>
int main()
{
    int num,d,rev=0,term;
    printf("Enter the number : ");
    scanf("%d",&num);
    term=num;
    while(num!=0)
    {
        d=num%10;
        rev=rev*10+d;
        num/=10;
    }
    if(rev==term)
    {
        printf("\nThe number is a Palindrome number");
    }
    else
    {
        printf("\nThe number isn't a Palindrome number,");
    }
    return 0;
}
