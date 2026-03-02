#include <stdio.h>
int main() {
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);

    int i = 0;
    int consumption;
    int completedTrips = 0;

    while (i < N) {
        scanf("%d", &consumption);

        if (fuel >= consumption) {
            fuel -= consumption;
            completedTrips++;
        } else {
        break;
        }

        i++;
    }

    printf("Completed Trips: %d\n", completedTrips);
    printf("Remaining Fuel: %d\n", fuel);

    return 0;
}