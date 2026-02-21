#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int noise[N];
    int i = 0;
    while(i < N) {
        scanf("%d", &noise[i]);
        i++;
    }
    int violations = 0;
    int currentStreak = 0;
    int maxStreak = 0;
    i = 0;
    while(i < N) 
    {
        if(noise[i] > 70) 
        {
            violations++;
            currentStreak++;

            if(currentStreak > maxStreak) 
            {
                maxStreak = currentStreak;
            }
        } else
        {
            currentStreak = 0;  
        }
        i++;
    }

    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation Streak: %d\n", maxStreak);

    return 0;
}