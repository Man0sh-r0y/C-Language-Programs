#include<stdio.h>
int main()
{
    //finding perfect numbers in a given range
    int num,sum=0,i=1,var=0,r1,r2;
    printf("Enter the range 1: ");
    scanf("%d",&r1);
    printf("Enter the range 2: ");
    scanf("%d",&r2);
    num=r1;
    printf("The armstrong numbers are: ");
    while(num<=r2)
    {
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
            var+=1;
            printf("%d, ",sum);
        }
        i=1;
        sum=0;
        num++;
    }
    printf("\b\b ");
    
    return 0;
}