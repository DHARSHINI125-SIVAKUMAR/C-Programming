#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int noise;
    int maxNoise = 0;
    int noisyPeriods = 0;

    for(int i = 0; i < N; i++) 
    {
        scanf("%d", &noise);

        if(i == 0 || noise > maxNoise)
        {
            maxNoise = noise;
        }

        if(noise > 70)
        {
            noisyPeriods++;
        }
    }

    printf("Maximum Noise: %d\n", maxNoise);
    printf("Noisy Periods: %d\n", noisyPeriods);

    return 0;
}