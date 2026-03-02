#include <stdio.h>
int main() {
    int ATMcash, N;
    scanf("%d", &ATMcash);
    scanf("%d", &N);

    int i = 0;
    int withdrawal;
    int successfulWithdrawals = 0;

    while (i < N) {
        scanf("%d", &withdrawal);

        if (ATMcash >= withdrawal) {
            ATMcash -= withdrawal;
            successfulWithdrawals++;
        } else {
            break;  
        }

        i++;
    }

    printf("Successful Withdrawals: %d\n", successfulWithdrawals);
    printf("Remaining Cash: %d\n", ATMcash);

    return 0;
}