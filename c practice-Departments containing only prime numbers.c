#include <stdio.h>

int main()
{
    int r,c,i,j,k,a[50][50],count=0,flag,prime;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
    flag=1;

    for(j=0;j<c;j++)
    {
    prime=1;

    if(a[i][j]<2)
        prime=0;

    for(k=2;k<a[i][j];k++)
        if(a[i][j]%k==0)
         prime=0;

        if(prime==0)
            flag=0;
        }

        if(flag==1)
            count++;
    }

    printf("%d",count);
    return 0;
}