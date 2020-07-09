//Using the ‘switch case’ write a program to accept an input number from the user and output the day as follows. 

#include <stdio.h>

void main(){
    
   int number;

   printf("Enter A number: \n");
   scanf("%d",&number);

   switch (number)
   {
   case 1:
       printf("Sunday\n");
       break;
    case 2:
       printf("Monday\n");
       break;
    case 3:
       printf("Tuesday\n");
       break;
    case 4:
       printf("Wednesday\n");
       break;
    case 5:
       printf("Thursday\n");
       break;
    case 6:
       printf("Friday\n");
       break;
    case 7:
       printf("Saturday\n");
       break;
    
   
   default:
       printf("Invalid Entry\n");
       break;
   }

 
 
}