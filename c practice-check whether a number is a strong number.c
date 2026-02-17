#include <stdio.h>

int main() {
    int N, temp, sum = 0;

    
    scanf("%d", &N);

    temp = N; 

    
    for(; temp > 0; temp /= 10) {
        int digit = temp % 10;  
        int fact = 1;

        
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
    }

    if(sum == N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

