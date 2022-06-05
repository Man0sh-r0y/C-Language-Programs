#include<stdio.h>

int main()
{
    //Adress of a variable
    int i = 45;
    int *address = &i;
    printf("The address of i is %u\n",address);
    address += 2;
    printf("After incrementing the value of address is %u\n",address);
    address -= 2;
    printf("After decrementing the value of address is %u\n",address);

    int array[3]= {1,2,3};
    int *address_index_0 = &array[0];
    int *address_index_1 = &array[1];
    printf("Address of Index 0 is %u\n",address_index_0);
    printf("Address of Index 1 is %u\n",address_index_1);
    //Address of Index 0 is 6422276 ---> OUTPUT
    //Address of Index 1 is 6422280 ---> OUTPUT
    printf("Difference between address of array[1] and array[0] is %u\n", address_index_1 - address_index_0 );
    //Difference between address of array[1] and array[0] is 1 ---> OUTPUT

    return 0;
}