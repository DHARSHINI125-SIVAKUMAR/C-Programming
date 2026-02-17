#include <stdio.h>

int main() {
    int N;
    int count = 0;


    scanf("%d", &N);

    
    for(int temp = N; temp > 0; temp /= 10) {
        int digit = temp % 10;  
        if(digit % 2 == 0) {    
            count++;             
        }
    }

    printf("%d\n", count);

    return 0;
}
