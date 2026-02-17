#include <stdio.h>

int main() {
    int M, N;
    int sum = 0;

    scanf("%d %d", &M, &N);

    for(int i = 1; i <= N; i++) {
        if(i % M == 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
