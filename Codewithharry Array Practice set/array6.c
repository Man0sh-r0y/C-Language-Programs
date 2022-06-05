/*Write a program containing functions that counts the number of positive
integers in an array.*/
#include<stdio.h>
void count(int arr[])
{
    int var=0;
    for(int i=0; i<15; i++)
    {
        if(arr[i]>0)
        {
            var+=1;
        }
    }
    printf("The number of positive integers in the array is %d",var);
}

int main()
{
    int a[] = {-1, 2, -6, 0, 5, 6, 8, -4, -7, -10, 45, 10, 12, -32, -89};
    count(a);

    return 0;
}
