#include <stdio.h>

int main() {
    int N;
    int revenue;
    int totalRevenue = 0;
    int targetDays = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &revenue);
        
        totalRevenue = totalRevenue + revenue;

        if(revenue > 50000) {
            targetDays++;
        }
    }

    printf("Total Revenue: %d\n", totalRevenue);
    printf("Target Days: %d\n", targetDays);

    return 0;
}