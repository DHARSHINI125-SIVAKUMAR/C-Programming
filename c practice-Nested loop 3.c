#include <stdio.h>
int main()
{
    int i,j;
    int num=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<i+1;j++){
         printf("%d ",num);
         num++;
        }
        printf("\n");
    }

    return 0;
}
