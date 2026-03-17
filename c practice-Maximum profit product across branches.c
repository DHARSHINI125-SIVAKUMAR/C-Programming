#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int a[10][10];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int max = -100000;

    for(int i=0;i<r;i++)
    {
    for(int k=i+1;k<r;k++)
    {
    for(int j=0;j<c;j++)
    {
    for(int l=0;l<c;l++)
    {
        int p = a[i][j] * a[k][l];
        if(p > max)
            max = p;
        }
      }
     }
    }

    printf("%d",max);

    return 0;
}