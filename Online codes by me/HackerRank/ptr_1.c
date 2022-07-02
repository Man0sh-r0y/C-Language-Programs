#include <stdio.h>

void update(int *a,int *b) 
{
    // Complete this function   
    int var1 = *a , var2 = *b; 
    if(*a>*b)
    {
       *b = *a - *b;
    }
    else if(*b>*a) 
    {
       *b = *b - *a; 
    }
    *a = var1 + var2;
}


int main() {
    int a=4, b=5;
    int *pa = &a, *pb = &b;
    
    //scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}