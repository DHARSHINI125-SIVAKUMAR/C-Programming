#include <stdio.h>
int maximum(int a, int b) {
    if (a>b)
        return a;
    else
        return b;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int max = maximum(A, B);
    printf("%d\n", max);

    return 0;
}