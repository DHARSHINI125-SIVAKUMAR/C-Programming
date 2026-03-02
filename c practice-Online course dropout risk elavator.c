#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int hours;
    int inactiveWeeks = 0;

    while (i < N) {
        scanf("%d", &hours);

        if (hours == 0) {
            inactiveWeeks++;
        }

        i++;
    }

    printf("Inactive Weeks: %d\n", inactiveWeeks);

    if (inactiveWeeks >= 3) {
        printf("Risk Status: High\n");
    } else {
        printf("Risk Status: Low\n");
    }

    return 0;
}