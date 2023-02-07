#include<stdio.h>
int sum(int n);
int main ()
{
    int n;
    printf("\nThe value of n is: ");
    scanf("%d",&n);
    printf("\nThe sum of the series is %d",sum(n));
    return 0;
}
//using function recursion
int sum(int n)
{
	int add;
    if(n==0)
    {
    	return 0;
	}
	else
	{
		return (n+sum(n-1));
	}
}
//using function
/*int sum(int n)
{
    int add=0,i=0;
    printf("\nThe series is ");
    while(i<n)
    {
    	++i;
        add+=i;
        printf("%d + ",i);
    }
    printf("\b\b ");
    printf("\nThe sum of the series is %d",add);
    return add;
}*/
