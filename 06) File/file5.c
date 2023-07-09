/*Write a program to modify a file containing an integer to double its value.
If old value = 2, then new file value = 4*/
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("manash.txt","r");
    int num;
    fscanf(ptr, "%d",&num);
    num*=2;
    ptr = fopen("manash.txt","w");
    fprintf(ptr, "%d\n",num);
    

    return 0;
}