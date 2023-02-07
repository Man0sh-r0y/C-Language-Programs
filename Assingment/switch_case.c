#include<stdio.h>

int main()
{
    int grade;

    printf("\n\nYour Grade is greater than 90/80/70/60 ??Choose a correct one: ");
    scanf("%d", &grade);

    switch(grade)
    {
        case 90:
        printf("Your grade is A");
        break;
        case 80:
        printf("Your grade is B");
        break;
        case 70:
        printf("Your grade is C");
        break;
        case 60:
        printf("Your grade is D");
        break;
        default :
        printf("Your grade is F");
        break;
    }

    return 0;
}