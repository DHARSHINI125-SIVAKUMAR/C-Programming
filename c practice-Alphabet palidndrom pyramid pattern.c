#include <stdio.h>
int main()
{
    int i,j;
    for(int i=1;i<=4;i++){
        
        for(int j=1;j<=4-i;j++){
         printf(" ");
            
        }
         
         for(int j=1;j<=i;j++){
         printf("%c",'A'+j-1);
         }
         
         for(int j=i-1;j>=1;j--){
         printf("%c",'A'+j-1);
        }
        printf("\n");
    }

    return 0;
}