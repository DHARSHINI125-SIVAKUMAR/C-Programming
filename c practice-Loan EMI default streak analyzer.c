#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int status;
    int currentStreak = 0;
    int maxStreak = 0;

    while (i < N) {
        scanf("%d", &status);

        if (status == 0) {          
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {                    
            currentStreak = 0;      
        }

        i++;
    }

    printf("Longest Default Streak: %d\n", maxStreak);

    return 0;
}