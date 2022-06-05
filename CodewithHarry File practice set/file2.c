/*Write a program to generate a multiplication table of a given number in text
format. Make sure that the file is readable and well-formatted.
*/
#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("table.txt","w");
    for (int i=0; i<10; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",5,i+1, 5*(i+1));
    }
    fprintf(ptr,"This is my code");
    //fputc('Hi! I"m Manash', ptr); fputc can only input character...not a line.
    
    fclose(ptr);

    return 0;
}