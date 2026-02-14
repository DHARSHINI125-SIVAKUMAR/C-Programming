#include<stdio.h>
int main(){
    int units;
    float bill;
    scanf("%d",& units);
    if(units<=100){
        bill=units*5;
    }
    else{
        bill=units*5;
    }
    printf("bill amount = rs.%0f",bill);
    return 0;
}

