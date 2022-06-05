#include<stdio.h>
#include<stdlib.h>
void area(int r,float A);
int main()
{
	int r;
	float A;
	printf("Enter the value of radius: ");
	scanf("%d",&r);
	area(r,A);
	return 0;
}
void area(int r,float A)
{
	A= 3.14*r*r;
	printf("The area of the circle is %.2f",A);
}
