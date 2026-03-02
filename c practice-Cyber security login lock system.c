#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int attempt;
    int consecutiveFailures = 0;
    int totalFailures = 0;
    int lockAttempt = -1;

    while (i < N) {
        scanf("%d", &attempt);

        if (attempt == 0) { 
            totalFailures++;
            consecutiveFailures++;

            if (consecutiveFailures == 3 && lockAttempt == -1) {
                lockAttempt = i + 1; 
            }
        } else { 
            consecutiveFailures = 0; 
        }

        i++;
    }

    if (lockAttempt == -1) {
        printf("Lock Triggered At Attempt: Not Locked\n");
    } else {
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);
    }

    printf("Total Failed Attempts: %d\n", totalFailures);

    return 0;
}