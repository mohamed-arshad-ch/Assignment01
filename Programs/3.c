//Write a program to find the simple interest.
#include <stdio.h>

void main(){

    int P;
    float R,n,SI;

    printf("Enter Principal Amount:\n");
    scanf("%d",&P);

    printf("Enter Intrest Rate:\n");
    scanf("%f",&R);

    printf("Enter Number Of Years:\n");
    scanf("%f",&n);

    SI=(P*R*n)/100;

    printf("Simple Intrest = %f",SI);

}