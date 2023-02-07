#include<stdio.h>
void temp_change(float far);
int main()
{
    float f;
    printf("\nEnter the temperature in fahrenheit: ");
    scanf("%f",&f);
    temp_change(f);
    return 0;
}
void temp_change(float far)
{
    float cel= (far-32)*5/9;
    printf("\nThe temperature in celcius will be %.2f",cel);
}
