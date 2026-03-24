#include <stdio.h>

int reverseNumber(int n) {
    int reversed = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    return reversed;
}

void checkPalindrome(int n) {
    if (n == reverseNumber(n)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
}

int main() {
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);
    checkPalindrome(N);
    return 0;
}