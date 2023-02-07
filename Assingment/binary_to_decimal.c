#include<stdio.h>
#include<math.h>
int main()
{
	//binary to decimal conversion
	int d, num, reminder, i=0, sum=0;
	printf("Enter a binary number: ");
    scanf("%d",&num);
    while(num!=-0)
    {
    	reminder=num%10;
    	d=reminder* pow(2,i);
    	sum=sum+d;
    	num=num/10;
    	i++;
	}
	printf("%d",sum);
	return 0;
}
