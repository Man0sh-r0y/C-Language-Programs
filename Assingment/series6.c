#include<stdio.h>
int main()
{
	int F=1,n,i=1,sum=0;//F for Factorial
	//Find the sum of the Series***----------\n
	//The general series is: S = 1! + 2! + 3! + 4! +--------+ N!
	printf("\n\n\tEnter the number: ");
	scanf("%d",&n);
	printf("\n\n\tThe Series is: ");
	while(i<=n)
	{
		F*=i;
		sum+=F;
		printf("%d! + ",i);
		i++;
		
	}
	printf("\b\b ");
	printf("\n\n\tThe Sum of the series is %d\n ",sum);
	return 0;
}
