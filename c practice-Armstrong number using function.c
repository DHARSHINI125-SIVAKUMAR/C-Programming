#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original=n, sum=0, digits=0;

    int temp = n;
    while (temp>0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i=0; i<digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int N;
    scanf("%d", &N);

    if (isArmstrong(N))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}