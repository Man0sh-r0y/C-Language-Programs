// Write a C program to compare the strings without using inbuilt string function.
#include <stdio.h>
int userDefinedStrcmp(char *ptr1, char *ptr2);
int main()
{
    char *ptr1 = "Manash";
    char *ptr2 = "Manash";
    char *ptr3 = "@13456";
    char *ptr4 = " dgtyn";
    int temp1 = userDefinedStrcmp(ptr1, ptr2);
    int temp2 = userDefinedStrcmp(ptr3, ptr4);
    printf("The difference between two string is %d\n", temp1);
    printf("The difference between two string is %d\n", temp2);
    return 0;
}
int userDefinedStrcmp(char *ptr1, char *ptr2)
{
    for (int i = 0; *(ptr1 + i) != '\0' && *(ptr2 + i) != '\0'; i++)
    {
        if (*ptr1 > *ptr2)
        {
            return 1;
        }
        else if (*ptr1 < *ptr2)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}