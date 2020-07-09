//Accept two inputs from the user and output its sum
#include <stdio.h>

void main(){

    int number1;
    float number2,sum=0;

    printf("Enter Two Number : \n");
    scanf("%d%f",&number1,&number2);

    sum=number1+number2;

    printf("Sum = %f",sum);
   
}