#include<stdio.h>
int main(){
    int N;
    int reverse = 0;

    scanf("%d",&N);

    for(; N > 0; N = N / 10){
        reverse = reverse * 10 + (N % 10);
    }

    printf("%d",reverse);

    return 0;
}
