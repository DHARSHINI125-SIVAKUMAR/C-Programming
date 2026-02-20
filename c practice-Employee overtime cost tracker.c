#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int overtime;
    int totalOvertime = 0;
    int heavyOvertimeDays = 0;

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &overtime);

        totalOvertime += overtime;

        if(overtime > 3)
        {
            heavyOvertimeDays++;
        }
    }

    int overtimeCost = totalOvertime * 200;

    printf("Total Overtime Hours: %d\n", totalOvertime);
    printf("Overtime Cost: %d\n", overtimeCost);
    printf("Heavy Overtime Days: %d\n", heavyOvertimeDays);

    return 0;
}