// write a program to check palindrome using pointers dunamical
#include <stdio.h>

int main() {
    char str[100], *ptr;
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    // Calculate length
    while (*(ptr + len) != '\0') {
        len++;
    }

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (*(ptr + i) != *(ptr + len - 1 - i)) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
