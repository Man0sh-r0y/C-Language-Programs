/*Write a function SumVector which returns the sum of two vectors passed to it.
The vectors must be two-dimensional.*/
#include<stdio.h>

typedef struct vector
{
    int x_coordinate;
    int y_coordinate;
}vec;

vec SumVector(vec v1, vec v2)
{
    vec result;
    result.x_coordinate = v1.x_coordinate + v2.x_coordinate;
    result.y_coordinate = v1.y_coordinate + v2.y_coordinate;
    return result;
}

int main()
{
    vec v1, v2, sum;
    v1.x_coordinate=4;
    v1.y_coordinate=5;
    v2.x_coordinate=9;
    v2.y_coordinate=5;
    printf("x coordinate is %d\n",SumVector(v1,v2).x_coordinate);
    printf("y coordinate is %d\n\n",SumVector(v1,v2).y_coordinate);
    //or we can write
    sum = SumVector(v1,v2);
    printf("x coordinate is %d\n",sum.x_coordinate);
    printf("y coordinate is %d\n\n",sum.y_coordinate);
    return 0;
}