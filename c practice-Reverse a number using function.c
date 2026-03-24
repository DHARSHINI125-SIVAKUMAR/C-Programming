#include <stdio.h>

int reverseNumber(int n) {
    int reversed = 0;
    int sign = (n < 0) ? -1 : 1;
    n = (n < 0) ? -n : n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return sign * reversed;
}

int main() {
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);

    int result = reverseNumber(N);
    printf("Reversed number: %d\n", result);

    return 0;
}