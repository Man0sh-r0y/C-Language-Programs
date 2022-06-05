#include<stdio.h>
int main()
{
    int sum=0,i=1, n,count;
    //Find the sum of the Series
    //The general series is: S = 1 + 3 + 5 +--------+ Up to Nth Term
    printf("\n\tEnter the value of N: ");
    scanf("%d",&n);
    printf("\n\tAfter putting value of N, the Series is: ");
    while(count<n)
    {
        sum+=i;
    	printf("%d + ", i);
		i+=2;
		count++;
    }
    printf("\b\b ");
    printf("\n\n\tThe sum of the series is: %d\n",sum);
    
    return 0;
}
