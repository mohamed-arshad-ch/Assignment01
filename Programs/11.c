//Write a program to find the number of even numbers in an array

#include <stdio.h>

void main(){

   int arr1[15],limit,count=0;

   printf("Enter Array Size : \n");
   scanf("%d",&limit);


   printf("Enter Your First Array Data : \n");
   for (int i = 0; i < limit; i++)
   {
       scanf("%d",&arr1[i]);
   }
   

  


    printf("\n");
    count=0;
   for (int i = 0; i < limit; i++)
   {
      if (arr1[i]%2==0)
      {
          count=count+1;
      }
      
   }

   printf("Number of even numbers in the given array is %d\n",count);
   
   
   

}