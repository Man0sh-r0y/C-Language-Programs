#include<stdio.h>

int main()
{
	//decimal number to binary conversion
    int num,i=0,reminder;
    int arr[20];
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    while(num!=0)
    {
    	arr[i]=num%2;
        num=num/2;
        i++;
    }
    for(i=i-1; i>=0; i--)
    {
    	printf("%d",arr[i]);
	}
    return 0;
    
    
}
