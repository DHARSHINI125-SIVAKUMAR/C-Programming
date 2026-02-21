#include <stdio.h>

int main() {
    int capacity, N;
    scanf("%d", &capacity);
    scanf("%d", &N);

    int items[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &items[i]);
    }

    int overflowDays = 0;

    for(int i = 0; i < N; i++) {
        capacity -= items[i];
        if(capacity < 0) {
            overflowDays++;
        }
    }

    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d\n", overflowDays);

    return 0;
}