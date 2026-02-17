#include <stdio.h>

int main() {
    int N, P;
    int result = 1; 
    scanf("%d %d", &N, &P);
    for(int i = 1; i <= P; i++) {
        result = result * N;
    }
    printf("%d\n", result);
    return 0;
}
