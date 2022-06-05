/*Create an array dynamically capable of storing 5 integers. Now use realloc so
that it can now store 10 integers.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("Enter the integer in %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int j=0; j<5; j++)
    {
        printf("The integer in %d element is : %d\n ",j+1,ptr[j]);
    }
    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=0; i<10; i++)
    {
        printf("Enter the integer in %d element: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int j=0; j<10; j++)
    {
        printf("The integer in %d element is : %d\n ",j+1,ptr[j]);
    }


    return 0;
}