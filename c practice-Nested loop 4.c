#include <stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
         printf("%c ",ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}