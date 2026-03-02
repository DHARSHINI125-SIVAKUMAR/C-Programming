#include <stdio.h>
int main() {
    int maxWeight, N;
    scanf("%d", &maxWeight);
    scanf("%d", &N);

    int i = 0;
    int weight;
    int totalWeight = 0;
    int passengersAllowed = 0;
    int overload = 0;

    while (i < N) {
        scanf("%d", &weight);

        if (totalWeight + weight > maxWeight) {
            overload = 1;
            break;   
        }

        totalWeight += weight;
        passengersAllowed++;
        i++;
    }

    printf("Passengers Allowed: %d\n", passengersAllowed);

    if (overload) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }

    return 0;
}