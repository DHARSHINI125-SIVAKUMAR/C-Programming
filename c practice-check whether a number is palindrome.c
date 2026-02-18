#include <stdio.h>

int main() {
    int N, original, remainder;
    int reverse = 0;

    scanf("%d", &N);

    original = N;

    for(; N > 0; N = N / 10) {
        remainder = N % 10;
        reverse = reverse * 10 + remainder;
    }

    if(original == reverse)
        printf("Yes");
    else
        printf("No");

    return 0;
}
