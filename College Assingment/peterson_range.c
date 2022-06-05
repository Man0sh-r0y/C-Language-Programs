#include<stdio.h>
int main()
{
    //Finding the peterson numbers in the given range
    int num,d,f,sum,term,i,r1,r2;
    printf("Enter the range 1: ");
    scanf("%d",&r1);
    printf("Enter the range 2: ");
    scanf("%d",&r2);
    num=r1;
    printf("The peterson numbers are: ");
    while(num<=r2)
    {
        term=num, sum=0;
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
        num=term;
        if(sum==term)
        {
            printf("%d, ",sum);
        }
        num++;
    }
    printf("\b\b ");

    return 0;
}