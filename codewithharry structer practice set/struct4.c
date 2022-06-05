/*Write a program with a structure representing a Complex number.*/
#include<stdio.h>

typedef struct complex_num
{
    int real; //Real part
    int img; //imaginary part
}cmplx;

int main()
{
    cmplx e1;
    e1.real=5;
    e1.img=6;
    printf("The complex number is %d + %di\n",e1.real,e1.img);

    return 0;
}