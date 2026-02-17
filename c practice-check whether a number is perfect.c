#include <stdio.h>

int main() {
    int N;
    int sum = 0;

   
    scanf("%d", &N);

    for(int i = 1; i < N; i++) {
        if(N % i == 0) {
            sum += i;
        }
    }

   
    if(sum == N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
