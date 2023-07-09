/*Create a structure representing a bank account of a customer. What fields did
you use and why?*/
#include<stdio.h>

typedef struct bank_account
{
    char name[20];
    int id;
    float money;
    char branch[20];
}bnk_acc;

int main()
{
    bnk_acc manash={"Manash",102356,60000.25,"Bansdroni"};
    
    printf("Name of Bank account is: %s\n",manash.name);
    printf("Id of Bank account is: %d\n",manash.id);
    printf("Money of Bank account is: %.2f\n",manash.money);
    printf("Branch of Bank account is: %s\n",manash.branch);

    return 0;
}