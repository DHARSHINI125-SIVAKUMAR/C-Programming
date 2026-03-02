#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int hours;
    int totalOvertime = 0;
    int burnoutDays = 0;

    while (i < N) {
        scanf("%d", &hours);

        totalOvertime += hours;

        if (hours > 4) {
            burnoutDays++;
        }

        i++;
    }

    printf("Total Overtime: %d\n", totalOvertime);
    printf("Burnout Days: %d\n", burnoutDays);

    return 0;
}