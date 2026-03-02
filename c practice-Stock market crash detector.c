#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int index;
    int prevIndex = 0;
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;

    while (i < N) {
        scanf("%d", &index);

        if (i > 0) { 
            if (index < prevIndex) {
                totalDrops++;
                consecutiveDrops++;
                if (consecutiveDrops == 3 && crashDay == -1) {
                    crashDay = i + 1; 
                }
            } else {
                consecutiveDrops = 0; 
            }
        }

        prevIndex = index;
        i++;
    }

    if (crashDay == -1) {
        printf("Crash Day: Not Detected\n");
    } else {
        printf("Crash Day: %d\n", crashDay);
    }

    printf("Total Drops: %d\n", totalDrops);

    return 0;
}