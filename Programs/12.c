//Write a program to sort an array in descending order

#include <stdio.h>

void main(){

   int arr1[15],limit,count=0,a;

   printf("Enter Array Size : \n");
   scanf("%d",&limit);


   printf("Enter Your First Array Data : \n");
   for (int i = 0; i < limit; i++)
   {
       scanf("%d",&arr1[i]);
   }
   
    

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            if (arr1[i]<arr1[j])
            {
                a=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=a;
            }
            
        }
        
    }
    printf("Sorted array:\n");
    for (int i = 0; i < limit; i++)
    {
        
        printf("%d\n",arr1[i]);
    }
    
    
   
   
   

}