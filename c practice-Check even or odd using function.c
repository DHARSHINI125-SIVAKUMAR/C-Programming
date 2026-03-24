#include <stdio.h>
void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main() {
    int N;
    scanf("%d", &N);
    checkEvenOdd(N);

    return 0;
}