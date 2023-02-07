#include<stdio.h>
int main()
{
	int n,i=1;//F for Factorial
	float sum=0,F=1;
	//Find the sum of the Series***----------\n
	//The general series is: S = 1 + 1/2! + 1/3! + 1/4! +--------+ 1/N!
	printf("\n\n\tEnter the number: ");
	scanf("%d",&n);
	printf("\n\n\tThe Series is: ");
	while(i<=n)
	{
		F*=i;
		sum+=1/F;
		printf("1/%d! + ",i);
		i++;
		
	}
	printf("\b\b ");
	printf("\n\n\tThe Sum of the series is %f\n ",sum);
	return 0;
}
