#include <stdio.h>
int main()
{
    int i,j;
    for(int i=4;i>=0;i--)
    {
         for(int j=i;j<=4;j++)
         {
         printf("%c",'A'+j);
         }
        printf("\n");
    }

    return 0;
}