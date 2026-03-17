#include<stdio.h>

int main()
{
    int r,c,i,j,a[10][10];
    int max=0,second=0;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
    if(a[i][j] > max)
    {
    second = max;
     max = a[i][j];
    }
    else if(a[i][j] > second && a[i][j] != max)
    {
    second = a[i][j];
      }
     }
    }

    printf("%d",second);

    return 0;
}