#include<stdio.h>
int main()
{
	int y;
	printf("\n\n\t-------Find weather given year is Leap Year or not---------\n\n");
	printf("\n\n\tEnter the Year: ");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("\n\n\tEntered year is Leap year\n");
	}
	else if(y%100!=0 && y%4==0)
	{
		printf("\n\n\tEntered year is Leap year\n");
	}
	else
	{
		printf("\n\n\tEntered year isn't Leap year\n");
	}
	return 0;
}
