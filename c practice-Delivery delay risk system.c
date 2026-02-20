#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int delay;
    int totalDelay = 0;
    int delayedCount = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &delay);

        totalDelay += delay;

        // Count deliveries delayed more than 30 minutes
        if(delay > 30) {
            delayedCount++;
        }
    }

    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Deliveries: %d\n", delayedCount);

    return 0;
}