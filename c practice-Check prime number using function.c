#include <stdio.h>

const char* isPrime(int n) {
    if (n <= 1) {
        return "Not Prime";
    }
    if (n == 2) {
        return "Prime";
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return "Not Prime";
        }
    }
    return "Prime";
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%s\n", isPrime(N));
    return 0;
}