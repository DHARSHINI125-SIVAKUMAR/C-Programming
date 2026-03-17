#include<stdio.h>

int main()
{
    int r,c,a[10][10],index=0;
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    int max=0;

    for(int j=0;j<c;j++)
    {
     int sum=0;

     for(int i=0;i<r;i++)
     sum+=a[i][j];

     if(sum>max)
     {
        max=sum;
        index=j;
     }
    }

    printf("%d",index);
    return 0;
}