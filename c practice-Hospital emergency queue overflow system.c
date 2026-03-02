#include <stdio.h>
int main() {
    int maxCapacity, N;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);

    int i = 0;
    int arrivals;
    int treatedPatients = 0;
    int rejectedPatients = 0;

    while (i < N) {
        scanf("%d", &arrivals);

        if (treatedPatients + arrivals <= maxCapacity) {
            treatedPatients += arrivals;
        } else {
            rejectedPatients += (treatedPatients + arrivals - maxCapacity);
            treatedPatients = maxCapacity;
        }

        i++;
    }

    printf("Treated Patients: %d\n", treatedPatients);
    printf("Rejected Patients: %d\n", rejectedPatients);

    return 0;
}