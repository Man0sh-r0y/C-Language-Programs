/*Create an array of 5 complex numbers created in problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.*/
#include<stdio.h>

typedef struct complex_num
{
    int real; //Real part
    int img; //imaginary part
}cmplx;

void Display(cmplx arr[5])
{
    for(int i=0; i<5; i++)
    {    
      printf("The value of real number of complex number %d: %d\n",i+1,arr[i].real);
      printf("The value of imaginary part of complex number %d: %d\n\n",i+1,arr[i].img);
    }
}

int main()
{
    cmplx a[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter the value of real number of complex number %d: ",i+1);
        scanf("%d", &a[i].real);
        printf("Enter the value of imaginary part of complex number %d: ",i+1);
        scanf("%d", &a[i].img);  
    }
    Display(a);

    return 0;
}