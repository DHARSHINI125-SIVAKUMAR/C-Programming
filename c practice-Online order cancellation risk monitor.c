#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int i = 0;
    int status;
    int successful = 0;
    int cancelled = 0;

    while (i < N) {
        scanf("%d", &status);

        if (status == 1) {
            successful++;
        } else if (status == 0) {
            cancelled++;
        }

        i++;
    }

    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);

    if (cancelled > successful) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }

    return 0;
}