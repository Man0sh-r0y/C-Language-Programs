#include<stdio.h>
int main()
{
    /*A palindromic number (also known as a numeral palindrome or a numeric palindrome)
    is a number (such as 16461) that remains the same when its digits are reversed.*/
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
