/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2)
points to the third element where ptr is a pointer pointing to the first element of
the array.*/
#include<stdio.h>
int main()
{
    int array[]={10,20,45,78,56,30,21,75,90,60};
    int *ptr = &array[0];
    printf("The value of 1st Element in this array is %d\n",*ptr);
    for(int i=0,j=3; i<4,j<10; i++,j+=2)
    {
        ptr += 2;
        printf("The value of %dth Element in this array is %d\n",j,*ptr);
    }
    
    return 0;
}