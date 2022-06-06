#include<stdio.h>
int M,N;
void additionMatrix(int arr1[N][M], int arr2[N][M]);
int main()
{
    int m,n;//coloumn and row of matrix
    printf("Enter the Coloumn of the Matrix 1 : ");
    scanf("%d",&m);
    printf("Enter the Row of the Matrix 1 : ");
    scanf("%d",&n);
    int matrix_1[n][m];
    int matrix_2[n][m];
    printf("\n\t---------Matrix 1----------\n");
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("Enter the element in Row %d and Coloumn %d: ",j+1,i+1);
            scanf("%d",&matrix_1[j][i]);
        }   
    }
    printf("\n ");
    printf("\n\t---------Matrix 2----------\n");
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("Enter the element in Row %d and Coloumn %d: ",j+1,i+1);
            scanf("%d",&matrix_2[j][i]);
        }   
    }
    M=m;
    N=n;
    additionMatrix(matrix_1,matrix_2);

    return 0;
}
void additionMatrix(int arr1[N][M], int arr2[N][M])
{
    for(int j=0; j<N; j++)
    {
        for(int i=0; i<M; i++)
        {
           printf("%4d",arr1[j][i]+ arr2[j][i]);
        }   
        printf("\n");
    }
}