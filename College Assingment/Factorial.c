#include<stdio.h>
int main()
{
	int F=1,n,i;//F for Factorial
	//Computing the Factorial of a Given Number
	printf("\n\n\tEnter the number: ");
	scanf("%d",&n);
	i=n;
	printf("\n\n\tThe factors are: ");
	while(i>0)
	{
		F*=i;
		printf("%d X ",i);
		--i;	
	}
	printf("\b\b ");
	printf("\n\n\tThe Factorial of (%d !) is %d\n ",n,F);
	return 0;
}
