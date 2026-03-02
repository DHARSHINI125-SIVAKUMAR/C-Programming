#include <stdio.h>
int main() {
    int maxWeight, N;
    scanf("%d", &maxWeight);
    scanf("%d", &N);

    int i = 0;
    int weight;
    int totalWeight = 0;
    int peopleEntered = 0;
    int overload = 0;

    while (i < N) {
        scanf("%d", &weight);

        if (totalWeight + weight > maxWeight) {
            overload = 1;   
            break;          
        }

        totalWeight += weight;
        peopleEntered++;
        i++;
    }

    printf("People Entered: %d\n", peopleEntered);
    printf("Overload Status: %s\n", overload ? "Yes" : "No");

    return 0;
}