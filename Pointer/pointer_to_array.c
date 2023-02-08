#include<stdio.h>

int main()
{
    char arr[] = "I_am_Manash_Roy";
    char *ptr = arr;
    for(int i=0; i< sizeof(arr); i++)
    {
        printf( "%c", ptr[i] );
    }

    return 0;
}
