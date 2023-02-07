#include<stdio.h>

void area_triangle(int *a, int *b);
void area_rectangle(int *a, int *b);
void area_circle(int *redius);

int main()
{
    int a,b,r,c, choice, var;
    printf("Enter your choice [choose 1 for triangle, 2 for rectangle, 3 for circle]: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter perpendicular of the triangle: ");
        scanf("%d",&a);
        printf("Enter base of the triangle: ");
        scanf("%d",&b);
        area_triangle(&a,&b);
    }
    else if(choice==2)
    {
        printf("Enter one side of the rectangle: ");
        scanf("%d",&a);
        printf("Enter other of the rectangle: ");
        scanf("%d",&b);
        area_rectangle(&a,&b);
    }
    else if(choice==3)
    {
        printf("Enter the radius of the cicle: ");
        scanf("%d",&r);
        area_circle(&r);
    }

    return 0;
}
void area_triangle(int *a, int *b)
{
    float A;
    A = (*a) * (*b)/2;
    printf("The area of the triangle is %.2f square unit\n",A);
}
void area_rectangle(int *a, int *b)
{
    float A;
    A = (*a) * (*b);
    printf("The area of the rectangle is %.2f square unit\n",A);
}
void area_circle(int *redius)
{
    float A;
    A = 3.14 * (*redius) * (*redius);
    printf("The area of the Circle is %.2f square unit\n",A);
}
