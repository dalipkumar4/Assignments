// Write a program to implement call by value, call by reference using pointer

#include <stdio.h>

// Call by value
void callByValue(int a) {
    a = a + 10;
    printf("Inside callByValue, a = %d\n", a);
}

// Call by reference using pointer
void callByReference(int *b) {
    *b = *b + 10;
    printf("Inside callByReference, b = %d\n", *b);
}

int main() {
    int x = 5, y = 5;

    printf("Before callByValue, x = %d\n", x);
    callByValue(x);
    printf("After callByValue, x = %d\n\n", x);  // x remains unchanged

    printf("Before callByReference, y = %d\n", y);
    callByReference(&y);
    printf("After callByReference, y = %d\n", y); // y gets changed

    return 0;
}
