#include<stdio.h>
#include<string.h>
void stringMerge(char *ptr1, char *ptr2);
int main()
{
    //I have to add string_2 content into string_1
    int i=0;
    char string_1[10], string_2[10];
    printf("Enter the String 1: ");
    scanf("%s",string_1);
    printf("Enter the String 2: ");
    scanf("%s",string_2);
    stringMerge(string_1,string_2);
    while(string_1[i] != '\0')
    {
        printf("%c",string_1[i]);
        i++;
    }

    return 0 ;
}
void stringMerge(char *ptr1, char *ptr2)
{   
    int i=0,j=0;
    while(i<strlen(ptr1))
    {
        if(ptr1[i]=='\0')
        {
            ptr1[i]= *ptr2;
            break;
        }
        i++;
    }
    //now i != 0 now ptr1[i]=*ptr2
    while(ptr2[j]!='\0')
    {
        ptr1[i+j]= *(ptr2+j);
        j++;
    }
    //now I have to add '\0' in the end of the string
    ptr1[i+j]='\0';

}
