#include<stdio.h>
int main()
{
    int sum=0,i=1, n;
    //Finding the sum of the Series
    //The general series is: S = 1 + 3 + 5 +--------+ N\n
    printf("\n\tEnter the value of N: ");
    scanf("%d",&n); 
    printf("\n\tAfter putting value of N, the Series is: ");
    while(i<=n) //using while Loop
    {
        sum+=i;
    	printf("%d + ",i);
		i+=2; 
    }
    printf("\b\b ");
    printf("\n\n\tThe sum of the series is: %d\n",sum);
    return 0;
}
