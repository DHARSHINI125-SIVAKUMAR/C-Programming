#include <stdio.h>
int main() {
    int initialCash, N;
    scanf("%d", &initialCash);
    scanf("%d", &N);

    int withdrawal;
    int remainingCash = initialCash;
    int riskCount = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &withdrawal);

        remainingCash -= withdrawal;

        if(remainingCash < 5000) {
            riskCount++;
        }
    }

    printf("Remaining Cash: %d\n", remainingCash);
    printf("Risk Count: %d\n", riskCount);

    return 0;
}