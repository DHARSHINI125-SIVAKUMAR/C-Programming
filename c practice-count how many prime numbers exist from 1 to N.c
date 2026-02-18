#include <stdio.h>

int main() {
    int N, i, j, count = 0,isPrime;

    scanf("%d", &N);

    for(i = 2; i <= N; i++) {
        isPrime = 1;   

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;   
                break;
            }
        }

        if(isPrime == 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
