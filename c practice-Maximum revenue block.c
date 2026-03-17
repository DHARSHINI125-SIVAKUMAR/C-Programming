#include<stdio.h>

int main()
{
    int r,c,a[10][10],max=0;

    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r-1;i++)
    {
    for(int j=0;j<c-1;j++
    {
        int sum=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];

        if(sum>max)
        max=sum;
     }
    }

    printf("%d",max);
