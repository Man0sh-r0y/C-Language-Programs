/*Take name and salary of two employees as input
 from the user and write them to a text file*/
 #include<stdio.h>

 int main()
 {
    float salary1, salary2;
    char name1[20], name2[20];
    printf("Enter the name of 1st person: ");
    scanf("%s",name1);
    printf("Enter the salary of 1st person: ");
    scanf("%f",&salary1);

    printf("Enter the name of 2nd person: ");
    scanf("%s",name2);
    printf("Enter the salary of 2nd person: ");
    scanf("%f",&salary2);

    FILE *ptr;
    ptr=fopen("manash.txt","w");
    fprintf(ptr,"%s, %.2f\n%s, %.2f\n",name1,salary1,name2,salary2);
    
 
     return 0;
 }
