#include<stdio.h>
int main(){
    int N;
    int count=0;

    scanf("%d",&N);
    for(;N>0;N=N/10){
        count++;
        
    }
    printf("%d",count);

    return 0;
}
