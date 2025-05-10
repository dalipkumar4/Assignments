//Q3. Write a program to print sum of natural no using recursion
#include <stdio.h>

int sum(int n);

int main(){
    int n;
    printf(sum(5));

    return 0;
}

int sum(int n){
    if(n<=1){
        return n;
    }
    else{
        return n += sum(n);
    }
}
