#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    int i = 0;

    while (i < N) {
        scanf("%d", &arr[i]);
        i++;
    }

    int maxStreak = 0;
    int currentStreak = 0;
    i = 0;

    while (i < N) {
        if (arr[i] == 0) {
            currentStreak++;
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;  
        }
        i++;
    }

    printf("Longest Failure Streak: %d\n", maxStreak);

    return 0;
}
