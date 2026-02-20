#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int voltage;
    int min_voltage;
    int low_voltage_count = 0;

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &voltage);

        if(i == 0) {
            min_voltage = voltage;
        }

        if(voltage < min_voltage) 
        {
            min_voltage = voltage;
        }

        if(voltage < 210) {
            low_voltage_count++;
        }
    }

    printf("Minimum Voltage: %d\n", min_voltage);
    printf("Low Voltage Events: %d\n", low_voltage_count);

    return 0;
}