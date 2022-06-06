#include<stdio.h>
void findElement(int *ptr, int n, int element);
int main()
{
    int size,element;
    printf("Enter the size of the Array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter the element %d in the Array: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter the Element which you want to find? ");
    scanf("%d", &element);
    findElement(array,size,element);

    return 0;
}
void findElement(int *ptr, int n, int element)
{
    for(int i=0; i<n; i++)
    {
        if(*(ptr+i)==element)
        {
            printf("The element %d is present at index %d",element,i);
        }
        else if(i==n-1 && *(ptr+i)==element)
        {
            printf("The element isn't available");
        }
    }
}
