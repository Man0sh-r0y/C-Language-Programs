#include<stdio.h>
int main()
{
    int arr[3][4];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("\nEnter the marks for Student %d Subject %d: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("The marks for Student %d Subject %d is %d\n",i+1,j+1,arr[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("arr[%d][%d]={%d}\n",i+1,j+1,arr[i][j]);
        }
    }

    return 0;
}