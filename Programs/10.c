//Write a program to interchange the values of two arrays

#include <stdio.h>

void main(){

   int arr1[15],arr2[15],swap[15],limit;

   printf("Enter Array Size : \n");
   scanf("%d",&limit);


   printf("Enter Your First Array Data : \n");
   for (int i = 0; i < limit; i++)
   {
       scanf("%d",&arr1[i]);
   }
   printf("Enter Your Second Array Data : \n");
   for (int i = 0; i < limit; i++)
   {
       scanf("%d",&arr2[i]);
   }


   for (int i = 0; i < limit; i++)
   {
       swap[i]=arr1[i];
       arr1[i]=arr2[i];
       arr2[i]=swap[i];
   }



    printf("\n");
   for (int i = 0; i < limit; i++)
   {
       printf("%d \n",arr1[i]);
   }
   printf("\n");
    for (int i = 0; i < limit; i++)
   {
       printf("%d \n",arr2[i]);
   }
   
   

}