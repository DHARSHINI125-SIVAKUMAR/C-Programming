#include <stdio.h>

int main() {
    int batteryPercent;
    int N;
    int drain;
    int i;

    scanf("%d", &batteryPercent);
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &drain);      
        batteryPercent = batteryPercent - drain;  
    }

    if(batteryPercent < 0) {
        batteryPercent = 0;
    }

    printf("Remaining Battery: %d%%", batteryPercent);
    
    return 0;
}