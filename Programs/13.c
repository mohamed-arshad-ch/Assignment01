//Write a program to identify whether a string is a palindrome or not

#include<stdio.h>
#include <string.h>

void main(){

    char a[20];
    int i, len;
    int f = 0;
    
    printf("Enter a string:");
    scanf("%s", a);
    
    len = strlen(a);
    
    for(i=0;i < len ;i++){
        if(a[i] != a[len-i-1]){
            f = 1;
            break;
   }
}
    
    if (f) {
        printf("%s is not a palindrome", a);
    }    
    else {
        printf("%s is a palindrome", a);
    }

}