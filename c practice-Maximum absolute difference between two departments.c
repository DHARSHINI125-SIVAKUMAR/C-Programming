#include <stdio.h>

int main()
{
    int r,c,i;
    int j,k,l,a[50][50],max=0,d;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      for(k=i+1;k<r;k++)
       for(l=0;l<c;l++)
    {
     d=a[i][j]-a[k][l];
        if(d < 0)
        d = -d;

        if(d > max)
        max = d;
    }

    printf("%d",max);

    return 0;
}