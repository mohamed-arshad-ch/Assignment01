//Write a program to find the sum of all the odd numbers for a given limit


#include <stdio.h>

void main(){
    
   int limit,sum=0;

   printf("Enter A Limit: \n");
   scanf("%d",&limit);
    sum=0;
   for (int i = 0; i < limit; i++)
   {
       if (i%2!=0)
       {
           sum=sum+i;
          
       }      
       
   }
   printf("Sum Of Odd Number : %d\n",sum);
 
}