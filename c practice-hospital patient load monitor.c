#include <stdio.h>

int main() {
    int N;
    int patients;
    int totalPatients = 0;
    int overcrowdedDays = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &patients);

        totalPatients = totalPatients + patients;  

        if(patients > 100) {                       
            overcrowdedDays++;
        }
    }

    printf("Total Patients: %d\n", totalPatients);
    printf("Overcrowded Days: %d\n", overcrowdedDays);

    return 0;
}