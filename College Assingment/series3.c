#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0;
    float term,sum=0;
    //Find the sum of the Series
    //The general series is: S = 1 + 1/2 + 1/4 + 1/8 + 1/16 +--------+ 1/2^N
    printf("\n\tEnter the value of N: ");
    scanf("%d",&n);
    printf("\n\tAfter putting value of N, the Series is: ");
    while(i<n)
    {
    	term=1/(pow(2,i));
    	sum+=term;
    	printf("1/2^%d + ",i);
    	i++;
    }
    printf("\b\b ");
    printf("\n\n\tThe sum of the series is: %f\n",sum);
    return 0;
}
