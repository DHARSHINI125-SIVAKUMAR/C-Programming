#include<stdio.h>
int main(){
    int choice;
    int a,b;
    printf("1,Addition\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    if(choice==1){
        printf("enter two numbers:");
        scanf("%d %d", &a,&b);
        printf("sum=%d",a+b);
        
    }
    else{
        printf("invalid choice");
        
    } return 0;
}