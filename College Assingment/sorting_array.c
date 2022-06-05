#include<stdio.h>

int main()
{
    //int arr[50] = {5, 2, 3, 9, 4, 6, 7, 1};
    //int var,n=8;
    /*for(int i=0; i<8; i++)
    {
        var=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]>var)
            {
                var=arr[j];
                printf("%d ",var);
            }
            for(int a=j; a<n; a++)
            {
                arr[a]=arr[a+1];
            }
            n--;
        }
        arr[i]=var;
    }

    for(int i=0; i<8; i++)
    {
        printf("%d\n",arr[i]);
    }*/
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n-i-1; j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             var=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=var;
    //         }
    //     }
    // }

    // for(int i=0; i<8; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    //Initialize array   
    int arr[] = {5, 2, 8, 7, 1};   
    int temp = 0;  
      
    //Calculate length of array arr  
    int length = 5;//sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",sizeof(arr));
    // printf("%d\n",sizeof(arr[0]));
    // printf("%d\n",length);  
      
    //Displaying elements of original array  
    printf("Elements of original array: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", arr[i]);   
    }    
      
    //Sort the array in ascending order  
    for (int i = 0; i < length; i++) {   
        for (int j = i+1; j < length; j++) {   
           if(arr[i] > arr[j]) {  
               temp = arr[i];  
               arr[i] = arr[j];  
               arr[j] = temp;  
           }   
        }   
    }  
      
    printf("\n");  
      
    //Displaying elements of array after sorting  
    printf("Elements of array sorted in ascending order: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", arr[i]);  
    }  
    
    return 0;
}