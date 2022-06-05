#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,count;
    float term,sum=0;
    //Find the sum of the Series***----------\n
    //The general series is: S = 1 - 1/3 + 1/9 - 1/27 + 1/81 - 1/243 +--------Up to Nth Term
    printf("\n\tEnter the value of N: ");
    scanf("%d",&n);
    printf("\n\tAfter putting value of N, the Series is: ");
    while(count<=n)
    {
    	term=1/(pow(-3,i));
    	sum+=term;
    	printf("1/(-3)^%d + ",i);
    	i++;
    	count++;
    }
    printf("\b\b ");
    printf("\n\n\tThe sum of the series is: %f\n",sum);
    return 0;
}
