#include<stdio.h>
int main() 
{ 
	int a[6], max=0, min; 
	//Finding maximum and minimum in between numbers using array
	for(int i=0;i<6;i++) 
	{ 
		printf("\n\t Enter the array element %d :",i+1); 
		scanf("%d",&a[i]); 
	} 
	min=a[0]; 
	for (int j=0;j<6;j++) 
	{ 
		if(a[j]>max) 
		{ 
			max=a[j]; 
		} 
		if(a[j]<min) 
		{ 
	 		min=a[j]; 
		} 
	} 
	printf("\n\t The minimum of your values is : %d",min); 
	printf("\n\t The maximum of your values is : %d",max); 
	return 0; 
} 

