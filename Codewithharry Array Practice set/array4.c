/*Write a program to create an array of 10 integers and store a multiplication
table of inputed number in it.*/
#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr = &arr[0];
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
//---------Method 1-----------
    for(int i=0, j=1; i<10, j<11; i++, j++)
    {
        *(&arr[i])=a*j;
    }

    printf("arr[%d] = { ",10);
    for(int i=0; i<10; i++)
    {
        printf("%d, ", *(&arr[i]));
    }
    printf("\b\b ");
    printf(" }");
//---------Method 2--------------
    for(int j=1; j<11; j++, ptr++)
    {
        *(ptr)=a*j;
    }

    printf("\n arr[%d] = { ",10);
    for(int i=0; i<10; i++)
    {
        printf("%d, ", *(&arr[i]));
    }
    printf("\b\b ");
    printf(" }");


    return 0;
}