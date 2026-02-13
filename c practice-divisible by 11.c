#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num % 11 == 0){
        printf("divisible by 11");
    }
    else{
        printf("not a divisible by 11");
    }

return 0;
}