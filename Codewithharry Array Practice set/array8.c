/*Create a three-dimensional array and print the address of its elements in
increasing order*/
#include<stdio.h>
int main()
{
    int arr[3][5][2] =  {
                            {   {55, 44}, 
                                {78, 90}, 
                                {45, 75},
                                {90, 91}, 
                                {92, 100}},
                            {
                                {74, 12}, 
                                {10, 23}, 
                                {20, 52}, 
                                {50, 40},
                                {41, 99}  },
                            { 
                                {85, 57}, 
                                {88, 80}, 
                                {85, 78}, 
                                {17, 18}, 
                                {19, 27} },
                        };

    printf("The address of Elements in increasing order is:\n ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=0; k<2; k++)
            {
                printf("%u ", (&arr[i][j][k]));
            }
        }
    }
    printf("\b\b ");

    return 0;
}