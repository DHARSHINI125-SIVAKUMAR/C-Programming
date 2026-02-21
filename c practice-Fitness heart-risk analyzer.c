#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int heartRate[N];
    int maxHeartRate = 0;
    int dangerReadings = 0;
    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &heartRate[i]);

        if(i == 0 || heartRate[i] > maxHeartRate)
        {
            maxHeartRate = heartRate[i];
        }

        if(heartRate[i] > 140) 
        {
            dangerReadings++;
        }
    }

    printf("Max Heart Rate: %d\n", maxHeartRate);
    printf("Danger Readings: %d\n", dangerReadings);

    return 0;
}