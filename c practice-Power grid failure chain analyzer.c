#include <stdio.h>
int main() {
    int capacity, N;
    scanf("%d", &capacity);
    scanf("%d", &N);

    int i = 0;
    int load;
    int safeHours = 0;
    int failureCount = 0;

    while (i < N) {
        scanf("%d", &load);

        if (load > capacity) {
            failureCount++;
        } else {
            safeHours++;
        }

        i++;
    }

    printf("Safe Hours: %d\n", safeHours);
    printf("Failure Count: %d\n", failureCount);

    return 0;
}