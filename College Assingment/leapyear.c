#include<stdio.h>

int main()
{
    int year;
    printf("\n\t\t**PROGRAM TO FIND A YEAR IS LEAP YEAR OR NOT****"); 
    printf("\n\n\tEnter a year: ");
    scanf("%d", &year);
    
     if(year%100==0 && year%400==0 || year%100!=0 && year%4==0)
    {
    printf("\n\n\t%d is leap year", year);
    }
    
    else
    printf("\n\n\t%d isn't leap year", year);
    return 0;
}
