#include<stdio.h>
int main()
{
    // the sum of cubes of each digit is equal to the number itself.
    // For example: 153 = 1*1*1 + 5*5*5 + 3*3*3 // 153 is an Armstrong number.
    int temp,i=1,remainder,digit=0,range1,range2;
    printf("Enter the range 1: ");
    scanf("%d",&range1);
    printf("Enter the range 2: ");
    scanf("%d",&range2);
    printf("The Armstrong numbers are: ");
    while(range1<=range2)
    {
        temp = range1;
        digit=0;
        while(range1 != 0)
        {
            remainder = range1 % 10;
            digit = digit + (remainder*remainder*remainder);
            range1 = range1 / 10;
        }
        range1 = temp;
        if(digit == range1)
        {
            printf("%d, ",digit);
        }
        range1++;
    }
    printf("\b\b ");
    
    
    return 0;
}
