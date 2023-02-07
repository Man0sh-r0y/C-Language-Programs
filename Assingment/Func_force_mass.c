#include<stdio.h>
int force_measure(float mass);

int main()
{
    float m;
    printf("\nEnter the Mass of the Body: ");
    scanf("%f",&m);
    force_measure(m);

    return 0;
}
int force_measure(float mass)
{
    float force= mass*9.8;
    printf("\nThe force applied on the mass due to gravity is %.2f",force);
    return force;
}