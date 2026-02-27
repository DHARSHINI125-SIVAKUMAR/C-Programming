#include <stdio.h>

int main()
{
    int totalData, N;
    int usage;
    int i = 0;
    int daysUsed = 0;

    scanf("%d", &totalData);
    scanf("%d", &N);

    while(i < N)
    {
        scanf("%d", &usage);

        totalData -= usage;

        if(totalData <= 0)
        {
            daysUsed++;
            totalData = 0;  
            break;
        }

        daysUsed++;
        i++;
    }

    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB", totalData);

    return 0;
}