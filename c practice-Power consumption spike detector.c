#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int units[N];
    int totalUnits = 0;
    int spikeHours = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &units[i]);
        totalUnits += units[i];

        if(units[i] > 5) {
            spikeHours++;
        }
    }

    printf("Total Units: %d\n", totalUnits);
    printf("Spike Hours: %d\n", spikeHours);

    return 0;
}