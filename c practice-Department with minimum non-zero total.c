#include<stdio.h>

int main()
{
    int r,c,a[10][10],index=-1,min=99999;
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
    {
     int sum=0;

     for(int j=0;j<c;j++)
     sum+=a[i][j];

     if(sum!=0 && sum<min)
     {
        min=sum;
        index=i;
     }
    }

    printf("%d",index);
    return 0;
}