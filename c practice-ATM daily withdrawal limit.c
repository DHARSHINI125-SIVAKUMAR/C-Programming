#include <stdio.h>
int main() {
    int N;
    int amount;
    int total = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &amount);
        total += amount;
    }
    if(total > 10000)
    {
        printf("Limit Exceeded\n");
    } else 
    {
        printf("Approved\n");
    }
    return 0;
}        