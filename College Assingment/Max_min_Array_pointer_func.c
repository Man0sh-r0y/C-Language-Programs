#include<stdio.h>
void find_max_min(int *ptr, int n);
int main()
{
    int n; //n is the size of Array
    printf("Enter the Length in the Array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++) 
	{ 
		printf("\n\t Enter the array element %d: ",i+1); 
		scanf("%d",&array[i]); 
	} 
    find_max_min(array,n);
    return 0;
}
void find_max_min(int *ptr, int n)
{
    int max=0,min=ptr[0];
    for(int i=0;i<n;i++) 
	{ 
		if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
        if(*(ptr+i)<min)
        {
            min=*(ptr+i);
        }
    }
    printf("\n\t The maximum number is %d and minimum number is %d\n",max,min);
} 


