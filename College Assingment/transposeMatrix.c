#include<stdio.h>
int M,N;
void transposeMatrix(int matrix[N][M]);
int main()
{
    int m,n;//coloumn and row of matrix
    printf("Enter the Coloumn of the Matrix: ");
    scanf("%d",&m);
    printf("Enter the Row of the Matrix: ");
    scanf("%d",&n);
    int matrix[n][m];
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<m; i++)
        {
            printf("Enter the element in Row %d and Coloumn %d: ",j+1,i+1);
            scanf("%d",&matrix[j][i]);
        }   
    }
    M=m;
    N=n;
    transposeMatrix(matrix);
    return 0;
}
void transposeMatrix(int matrix[N][M])
{
    for(int j=0; j<M; j++)
    {
        for(int i=0; i<N; i++)
        {
           printf(" %d ",matrix[i][j]);
        }   
        printf("\n");
    }
}