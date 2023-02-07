#include<stdio.h>
void bubbleSort(int *ptr, int n);
int main()
{
    int n;// n denotes the length of the Array
    printf("Enter the length of the Array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    bubbleSort(array,n);
    printf("After Sorting The elements in the Array is: ");
    for(int i=0; i<n; i++)
    {
        printf("%d, ",array[i]);
    }
    printf("\b\b ");

    return 0;
}
void bubbleSort(int *ptr, int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}