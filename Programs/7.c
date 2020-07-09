//Write a program to print the multiplication table of given number

#include <stdio.h>

void main(){
    
   int number,i,mul=0;

   printf("Enter A number: \n");
   scanf("%d",&number);

   for (int i = 1; i <=10; i++)
   {
      mul=i*number;

      printf("%d * %d = %d\n",i,number,mul);
   }
   



   

 
 
}