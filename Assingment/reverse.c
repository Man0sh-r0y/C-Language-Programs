#include<stdio.h>
int main()
{
	int num,d,sum=0,rev=0; 
	//Reverse a Number & the Sum of the Digits of the given Number
	printf("\n\n\tEnter a Number: "); 
	scanf("%d",&num); 
	printf("\n\n\tReversed number is : "); 
	while(num!=0)
	{
		d=num%10;
		sum+=d;
		rev=(rev*10)+d;
		num/=10;
	}
	printf("%d",rev);
	printf("\n\n\tThe Sum of digits is %d",sum);
	
	return 0;
}
