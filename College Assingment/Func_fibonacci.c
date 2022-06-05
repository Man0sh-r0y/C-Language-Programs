#include<stdio.h>
int fib(int n);
int main()
{
    int N;
    printf("\nEnter the value of n: ");
    scanf("%d",&N);
    fib(N);
    return 0;
}
// Using Function Recursion
int fib(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n2+n1;
		n1=n2;
		n2=n3;
		fib(n-1);
	}
	if(n==1)
	{
		printf("The nth term is %d",n3);
	}
	return n3;
}
/* not using recursion
int fibonacci(int n1,int n2,int n)
{
    int n3;
    for(int i=0;i<n;i++)
    {
        n3= n1+n2;
        n1=n2;
        n2=n3;
    }
    printf("\nThe nth element is %d",n3);
    return n3;
}
*/
