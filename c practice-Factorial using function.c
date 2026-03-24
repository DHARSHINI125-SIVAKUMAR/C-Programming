#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int N;
    scanf("%d", &N);

    int result = factorial(N);
    printf("%d\n", result);

    return 0;
}