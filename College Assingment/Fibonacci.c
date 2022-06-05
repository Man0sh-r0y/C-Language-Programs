#include<stdio.h>    
int main()    
{    
    int n1=0,n2=1,n3,i,n,sum=0;    
    //The general Series is : S= 1 + 1 + 2 + 3 + 5 + 8 + 13 + . . . . + Up to Nth Term
    printf("\n\n\tEnter the value of N: ");    
    scanf("%d",&n); 
    printf("\n\n\tThe series is %d + ",n2);   
    i=2;
    while(i<=n)
    {
        n3=n1+n2;    
        printf(" %d + ",n3);
        sum+=n3;    
        n1=n2;    
        n2=n3; 
        ++i;  
    }
    printf("\b\b ");
    printf("\n\n\tThe sum of the series is %d\n",sum+1);
    return 0;  
 }    
