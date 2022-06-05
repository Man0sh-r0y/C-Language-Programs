#include<stdio.h>
int main()
{
	int i,r1,r2,num,sum=0;
	//Finding the sum of all numbers divisible by 7 within a given range of numbers
	printf("\n\n\tEnter the range 1: ");
	scanf("%d",&r1);
	printf("\n\n\tEnter the range 2: ");
	scanf("%d",&r2);
	printf("\n\n\tThe series is: ");
	num=r1;
	while(num<=r2)
	{
		if(num%7==0)
		{
			sum+=num;
			printf("%d + ",num);
		}
		num++;
	}
	printf("\b\b ");
    printf("\n\n\tThe sum of the series is: %d\n",sum);
    return 0;
}
