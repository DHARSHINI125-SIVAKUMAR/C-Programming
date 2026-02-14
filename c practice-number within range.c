#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num >= 10 && num <= 20){
        printf("number is within range");
    }
    else{
        printf(" number is not within range");
    }
    return 0;
}