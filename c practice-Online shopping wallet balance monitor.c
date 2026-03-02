#include <stdio.h>
int main() {
    int walletBalance, N;
    scanf("%d", &walletBalance);
    scanf("%d", &N);

    int i = 0;
    int purchase;
    int successfulPurchases = 0;

    while (i < N) {
        scanf("%d", &purchase);

        if (walletBalance >= purchase) {
            walletBalance -= purchase;
            successfulPurchases++;
        } else {
            break;
        }

        i++;
    }

    printf("Successful Purchases: %d\n", successfulPurchases);
    printf("Final Balance: %d\n", walletBalance);

    return 0;
}