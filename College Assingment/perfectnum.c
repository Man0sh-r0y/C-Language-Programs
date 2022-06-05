#include<stdio.h>
int main()
{
    int num,sum=0,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(i<=num/2)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==num)
    {
        printf("\nThe number is perfect number.");
    }
    else
    {
        printf("\nThe number isn't perfect number.");
    }

    return 0;
}
