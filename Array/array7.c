/*Create an array of size 3x10 containing multiplication tables of 
a custom input given by the user.*/
#include<stdio.h>
int main()
{
    int arr[3][10];
    int p,q,r;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&p,&q,&r);

    for(int i=0; i<3; i++)
    {
        for(int j=0,k=1; j<10,k<11; j++,k++)
        {
            if(i==0)
            {
                *(&arr[i][j]) = p*k;
            }
            if(i==1)
            {
                *(&arr[i][j]) = q*k;
            }
            if(i==2)
            {
                *(&arr[i][j]) = r*k;
            }
        }
    }
    for(int a=0; a<3; a++)
    {
        for(int b=0; b<10; b++)
        {
            printf("arr[%d][%d] = %d\n",a,b,*(&arr[a][b]));
        }
    }

    return 0;
}