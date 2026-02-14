#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d" , &a, &b);
    if (a<b){
        printf("%d is a smallest",a);
    }
    else{
        printf("%d is a smallest",b);
    }
    return 0;
}