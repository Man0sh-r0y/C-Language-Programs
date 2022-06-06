#include<stdio.h>
int sumNatural(int n);
int main()
{
	int n;
	printf("Enter the number of n: ");
	scanf("%d",&n);
	printf("The sum of natural number is %d\n",sumNatural(n));
	return 0;
}
int sumNatural(int n)
{
	if(n!=0)
	{
		return n+sumNatural(n-1);
	}
} 
