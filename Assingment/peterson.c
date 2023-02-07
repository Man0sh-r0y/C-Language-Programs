#include<stdio.h>
int main()
{
    /*A number is said to be Peterson
    if the sum of factorials of each digit is equal to the sum of the number itself.
    Krishnamurthy number is another special number in Java. A number is said to be Krishnamurthy 
    if the factorial sum of all its digits is equal to that number
    example- 145
    */
    int num,d,f,term,sum=0,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    term=num;
    while(num!=0)
    {
        f=1,i=1;
        d=num%10;
        while(i<=d)
        {
            f*=i;
            i++;
        }
        sum+=f;
        num/=10;
    }
    if(sum==term)
    {
        printf("\nThe number is a Peterson Number");
    }
    else
    {
        printf("\nThe number isn't a Peterson Number");
    }

    return 0;
}
