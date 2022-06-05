#include<stdio.h>
int main()
{
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
