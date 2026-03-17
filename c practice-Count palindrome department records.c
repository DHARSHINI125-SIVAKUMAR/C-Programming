#include<stdio.h>

int main()
{
    int r,c,a[10][10],count=0;
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
    {
     int ok=1;

     for(int j=0;j<c/2;j++)
        if(a[i][j]!=a[i][c-1-j])
        ok=0;

        if(ok) count++;
    }

    printf("%d",count);
    return 0;
}