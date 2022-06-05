/*Create a two-dimensional vector using structures in C*/
#include<stdio.h>

typedef struct vector
{
    int x_coordinate;
    int y_coordinate;
}vec;

int main()
{
    //using without pointer
    vec element;
    element.x_coordinate=4;
    element.y_coordinate=5;
    printf("%di + %dj\n", element.x_coordinate, element.y_coordinate);
    //using pointer to structer
    vec *ptr = &element;
    ptr->x_coordinate=6;
    ptr->y_coordinate=8;
    printf("%di + %dj\n", element.x_coordinate, element.y_coordinate);

    return 0;
}