#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int a[10][10], sum[10];

    for(int i=0;i<r;i++)
    {
    sum[i]=0;
    for(int j=0;j<c;j++)
    {
    scanf("%d",&a[i][j]);
    sum[i]+=a[i][j];
     }
    }

    int max=0;

    for(int i=0;i<r;i++)
    {
    for(int j=i+1;j<r;j++)
    {
        int diff = sum[i]-sum[j];
        if(diff<0)
         diff=-diff;

        if(diff>max)
        max=diff;
        }
    }

    printf("%d",max);

    return 0;
}