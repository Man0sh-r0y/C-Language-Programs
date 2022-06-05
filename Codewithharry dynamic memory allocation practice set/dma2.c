/*Write a program to dynamically create an array of size 6 capable of storing 6
integers using calloc*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) calloc(6,sizeof(int));
    // for(int i=0; i<6; i++)
    // {
    //     printf("Enter the integer in %d element: ",i+1);
    //     scanf("%d",&ptr[i]);
    // }
    for(int j=0; j<6; j++)
    {
        printf("The integer in %d element is : %d\n ",j+1,ptr[j]);
    }

    return 0;
}