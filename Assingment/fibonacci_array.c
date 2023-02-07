#include<stdio.h>
int main()
{
	//Fibonacci series using array
	int arr[10],n,i,j,sum=0;
	printf("Enter the length of the series: ");
	scanf("%d",&n);
	arr[0]=0;
	arr[1]=1;
	for(i=2; i<n; i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}
	printf("The seriers is : ");
	for(j=0; j<n; j++)
	{
		printf("%d + ", arr[j]);
		sum += arr[j];
	}
	printf("\b\b ");
	printf("\nThe sum of the series is : %d",sum);
	
	return 0;
	
}
