#include <stdio.h>
int main()
{
    int i,j,s;
    for(int i=5;i>=1;i--)
    {
        for(s=1;s<=5-i;s++)
        printf(" ");
        
         for(int j=1;j<=2*i-1;j++)
         {
         printf("*");
         }
        printf("\n");
    }

    return 0;
}