#include <stdio.h>

int main()
{
    int r,c,i,j,a[50][50],count=0,max,min;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
    max=a[i][0];
    min=a[i][0];

    for(j=1;j<c;j++)
    {
        if(a[i][j]>max)
        max=a[i][j];

        if(a[i][j]<min)
            min=a[i][j];
        }

        if(max-min<=1000)
            count++;
    }

    printf("%d",count);
    return 0;
}