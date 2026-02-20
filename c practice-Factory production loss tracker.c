#include <stdio.h>

int main() {
    int N;
    int loss;
    int totalLoss = 0;
    int highLossDays = 0;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &loss);

        totalLoss = totalLoss + loss;   

        if(loss > 100) {                
            highLossDays++;
        }
    }

    printf("Total Loss: %d\n", totalLoss);
    printf("High Loss Days: %d\n", highLossDays);

    return 0;
}