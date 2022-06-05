#include<stdio.h>
int main()
{
	int i=1,num;
	//Checking weather number is prime or not
	printf("\n\n\tEnter the number: ");
	scanf("%d",&num);
	if(num==1)
		{
			printf("\n\n\tThe number isn't a Prime Number\n");	
		}
	while(i>0)
	{
		++i;
	    if(num!=i)
		{
			if(num%i==0)
		
			{
				printf("\n\n\tThe number isn't a Prime Number\n");
				break;
			}
		}
		else if(i==num)
		{
			printf("\n\n\tThe number is a Prime Number\n");
			break;
		}
	}
	return 0;	
}
