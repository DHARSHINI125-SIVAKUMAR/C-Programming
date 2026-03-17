#include<stdio.h>

int main()
{
    int r,c,a[10][10],count=0;
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    {
        int n=a[i][j],f=0;

        if(n>1)
        {
        for(int k=2;k<n;k++)
         if(n%k==0) f=1;

         if(f==0) count++;
            }
        }

    printf("%d",count);
    return 0;
}