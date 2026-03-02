#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int vibration;
    int consecutiveUnsafe = 0;
    int unsafeCount = 0;
    int breakdownReading = -1;

    while (i < N) {
        scanf("%d", &vibration);

        if (vibration > 70) {         
            unsafeCount++;
            consecutiveUnsafe++;

            if (consecutiveUnsafe == 3 && breakdownReading == -1) {
                breakdownReading = i + 1; 
            }
        } else {
            consecutiveUnsafe = 0;      
            break;
        }

        i++;
    }

    if (breakdownReading == -1) {
        printf("Breakdown At Reading: Not Occurred\n");
    } else {
        printf("Breakdown At Reading: %d\n", breakdownReading);
    }

    printf("Unsafe Readings: %d\n", unsafeCount);

    return 0;
}