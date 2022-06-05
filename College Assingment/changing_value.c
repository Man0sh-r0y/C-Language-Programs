#include<stdio.h>

void changing_value(int a)
{
    a = 11;
}

int main()
{
    int b = 15;
    int *j = &b;
    printf("Before changing The value of b is: %d\n\n",*j);
    changing_value(b);
    printf("After changing The value of b is: %d\n\n",*j);

    return 0;
}