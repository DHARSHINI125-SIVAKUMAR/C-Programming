#include <stdio.h>

int sumNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);
    int result = sumNaturalNumbers(N);
    printf("Sum of first %d natural numbers: %d\n", N, result);
    return 0;
}