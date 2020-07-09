//Write a program to check whether a student has passed or failed in a subject after he or she enters their mark 
#include <stdio.h>

void main(){
    
    float mark;

    printf("Enter Your Mark : \n");
    scanf("%f",&mark);

    if (mark>=50)
    {
        printf("Passed\n");
    }else
    {
        printf("Failed\n");
    }
 
}