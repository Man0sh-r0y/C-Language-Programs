#include<stdio.h>
int main()
{
	int i,r1,r2,num,sum=0;
	//Finding the sum of all the Prime numbers between a given range of numbers
	printf("\n\n\tEnter the range 1: ");
	scanf("%d",&r1);
	printf("\n\n\tEnter the range 2: ");
	scanf("%d",&r2);
	printf("\n\n\tThe series is: ");
	num=r1;
	while(num<=r2)
	{
		for(i=2;i>0,num>1;i++)
		{
			if(num!=i)
			{
				if(num%i==0)
				{
					break;	
		        }
			}
			else if(i==num)
			{
				printf("%d + ",num);
				sum+=num;
				break;
			}
		}
		num++;
	}
	printf("\b\b ");
	printf("\n\n\tThe value of Sum is %d\n",sum);
	return 0;
	
}
