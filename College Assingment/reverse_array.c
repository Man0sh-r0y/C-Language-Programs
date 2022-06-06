#include<stdio.h>
void reverse_array(int *ptr, int n);
int main()
{
    int n;//n denotes the length of the Array
    printf("Enter the length of the Array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    reverse_array(array,n);
    for(int i=0; i<n; i++)
    {
        printf("After reverse Element %d is %d\n",i+1,array[i]);
    }

    return 0;
}
void reverse_array(int *ptr, int n)
{
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[n-1-i];
        ptr[n-1-i]=temp;
    }
}