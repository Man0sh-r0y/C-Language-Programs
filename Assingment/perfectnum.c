#include<stdio.h>
int main()
{
    /*A perfect number is a positive integer that is equal to the sum of its factors excluding the number itself.
     For example, 6 is a perfect number because when we add all its factors except 6, we get, 1 + 2 + 3 = 6. */
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
