/*Write a program containing a function that reverses the array passed to it.*/
#include<stdio.h>

void reverse_arr(int *ptr, int arr[])
{
    int a[10];
    for(int j=0; j<10; j++,ptr--)
    {
         a[j]= *ptr;
    }
    for(int i=0; i<10; i++)
    {
        arr[i]=a[i];
    }
}

int main()
{
    int arr[10]= { 10, 25, 56, 85, 90, 45, 86, 20, 30, 40 };
    for(int a=0; a<10; a++)
    {
        printf("Before reversing The value of arr[%d] = %d\n",a,*(&arr[a]));
    }
    printf("\n\n");
    reverse_arr(&arr[9], arr);
    for(int b=0; b<10; b++)
    {
        printf("After reversing The value of arr[%d] = %d\n",b,*(&arr[b]));
    }

    return 0;
}