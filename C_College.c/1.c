// Q1. Write a program to take age as input and age should be always true

#include <stdio.h>

int main(){
    int age,result;
    printf("Enter Your age: ");
    scanf("%d",&age);
    
    (age<18) ? printf("Not Adult") : printf("Adult");

    return 0;
}
