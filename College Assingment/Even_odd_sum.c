#include<stdio.h>
int main()
{
	int i=1,sum=0;
	//find the sum of all the Even and Odd numbers between 1 and 100.
	printf("\n\n\tThe Series is: ");
	while(i>=1,i<=100)
	{
		printf("%d + ",i);
		sum+=i;
		i++;
	}
	printf("\b\b ");
	printf("\n\n\tThe Sum of the series is %d\n ",sum);
	return 0;
}
