/*Write a structure capable of storing date. Write a function to compare those
dates*/
#include<stdio.h>

typedef struct date
{
    int date; 
    int month;
    int year;
}date;

date display(date e1, date e2)
{
    //printf("The date is %d/%d/%d\n",e1.date,e1.month,e1.year);
    date result;
    if(e1.date>e2.date)
    {
        result.date= e1.date - e2.date;
    }
    else
    {
        result.date= e2.date - e1.date;
    }
    if(e1.month>e2.month)
    {
        result.month= e1.month - e2.month;
    }
    else
    {
        result.month= e2.month - e1.month;
    }
    if(e1.year>e2.year)
    {
        result.year= e1.year - e2.year;
    }
    else
    {
        result.year= e2.year - e1.year;
    }
    return result;
}

int main()
{
    date d1= {2, 5, 21};
    date d2= {5, 4, 21};
    date diff;
    diff=display(d1,d2);
    printf("The difference between 1st date and 2nd date is : %d days,%d months, %d years",diff.date,diff.month,diff.year);
    return 0;
}