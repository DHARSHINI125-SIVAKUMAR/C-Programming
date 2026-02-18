#include <stdio.h>

int main() {
    int N, original, remainder;
    int digits = 0, sum = 0;
    scanf("%d", &N);
    original = N;
    for (int temp = N; temp > 0; temp /= 10) {
        digits++;
    }
    for (int temp = N; temp > 0; temp /= 10) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;   
        }

        sum += power;
    }
    if (sum == original)
        printf("Yes");
    else
        printf("No");
    return 0;
}
