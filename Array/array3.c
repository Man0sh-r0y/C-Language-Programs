/*
If S[3] is a 1-D array of integers, then *(S+3) refers to the third element:
1) True
2) False
3) Depends
*/
#include<stdio.h>
int main()
{
    int S[3]={1,2,3};
    printf("Thr address of 3rd element in this array is: %u\n",*(S+3));
    printf("The address of 3rd element is %u\n",&S[2]);

    return 0;
}
//So the ans is False