#include <stdio.h>

int main()
{
    int r,c,i,j,a[50][50];
    int max=0,row=0,len;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
    len=1;

    for(j=1;j<c;j++)
    {
     if((a[i][j]%2)!=(a[i][j-1]%2))
        len++;
    }

    if(len>max)
    {
        max=len;
        row=i;
        }
    }

    printf("%d",row);
    return 0;
}