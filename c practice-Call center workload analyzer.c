#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int calls[N];
    int totalCalls = 0;
    int overloadedHours = 0;

    for(int i = 0; i < N; i++) {
        scanf("%d", &calls[i]);
        totalCalls += calls[i];

        if(calls[i] > 40) {
            overloadedHours++;
        }
    }

    printf("Total Calls: %d\n", totalCalls);
    printf("Overloaded Hours: %d\n", overloadedHours);

    return 0;
}