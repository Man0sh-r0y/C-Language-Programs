#include<stdio.h>

void passing_value_of_array(int arr[])
{
    arr[2] = 15;
}

int main()
{
    int a[4]={1,2,3,4};
    for(int i=0; i<4; i++)
    {
        printf("Before changing the values of array is %d\n", a[i]);
    }
    printf("\n\n");
    passing_value_of_array(a);

    for(int i=0; i<4; i++)
    {
        printf("Before changing the values of array is %d\n", a[i]);
    }

    return 0;
}