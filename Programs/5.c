//Write a program to show the grade obtained by a student after he/she enters their total mark percentage.
#include <stdio.h>

void main(){
    
   float Totalmark;

   printf("Enter Your Mark: \n");
   scanf("%f",&Totalmark);

   if (Totalmark>=90)
   {
       printf("Your Grade  :  A\n");
   }else if (Totalmark>=80)
   {
       printf("Your Grade  : B\n");
   }else if (Totalmark>=70)
   {
       printf("Your Grade :C\n");
   }else if (Totalmark>=60)
   {
       printf("Your Grade  : D\n");
   }else if (Totalmark>=50)
   {
       printf("Your Grade :E\n");
   }else
   {
        printf("Failed\n");   
   }
   
  
 
}