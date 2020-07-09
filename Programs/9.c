//Write a program to print the following pattern (hint: use nested loop)


#include<stdio.h>

void main(){

    for (int i = 0; i < 6; i++)
    {
        printf(" ");
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }

}