#include<stdio.h>

int main()
{
    int arr[8]={5, 2, 3, 9, 4, 6, 7, 1};
    for(int i=2; i<8; i++)//Want to delete array element of index 2
    {
        arr[i]=arr[i+1];
    }
    for(int i=0; i<7; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}