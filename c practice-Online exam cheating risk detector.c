#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int scores[N];
    int totalRisk = 0;
    int highRiskSessions = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        totalRisk += scores[i];

        if(scores[i] > 50) {
            highRiskSessions++;
        }
    }

    printf("Total Risk: %d\n", totalRisk);
    printf("High Risk Sessions: %d\n", highRiskSessions);

    return 0;
}