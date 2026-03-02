#include <stdio.h>
int main() {
    int dataPack, N;
    scanf("%d", &dataPack);
    scanf("%d", &N);

    int i = 0;
    int usage;
    int exhaustedDay = -1;
    int overusedData = 0;

    while (i < N) {
        scanf("%d", &usage);
        dataPack -= usage;

        if (dataPack < 0 && exhaustedDay == -1) {
            exhaustedDay = i + 1;        
            overusedData = -dataPack;    
        }

        i++;
    }

    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overusedData);
    }

    return 0;
}