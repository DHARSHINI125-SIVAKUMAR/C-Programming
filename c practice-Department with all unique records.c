#include <stdio.h>

int main()
{
    int r,c,i,j;
    int k,a[50][50],count=0,flag;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
    flag=0;

    for(j=0;j<c;j++)
    {
    for(k=j+1;k<c;k++)
    {
        if(a[i][j]==a[i][k])
        flag=1;
         }
        }

        if(flag==0)
            count++;
    }

    printf("%d",count);
    return 0;
} 