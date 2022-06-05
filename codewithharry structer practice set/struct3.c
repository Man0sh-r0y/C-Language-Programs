/*Write a program to illustrate the use of an arrow operator -> in C.*/
#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee manash, priya;
    struct employee *ptr1; 
    struct employee *ptr2;
    ptr1=&manash;
    ptr2=&priya;
    ptr1->code=10;
    ptr1->salary=80000;
    strcpy(ptr1->name,"Manash");
    printf("Code of Manash is %d\n",manash.code);
    printf("Salary of Manash is %.2f\n",manash.salary);
    printf("Name of Manash is %s\n\n\n",manash.name);

    ptr2->code=20;
    ptr2->salary=50000;
    strcpy(ptr2->name,"Priya");
    printf("Code of Priya is %d\n",priya.code);
    printf("Salary of Priya is %.2f\n",priya.salary);
    printf("Name of Priya is %s\n\n\n",priya.name);




    return 0;
}