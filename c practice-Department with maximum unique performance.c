#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int a[10][10];

    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }

    int max=0, index=0;

    for(int i=0;i<r;i++)
    {
    int unique=0;
    for(int j=0;j<c;j++)
    {
    int flag=0;
    for(int k=0;k<j;k++)
    {
        if(a[i][j]==a[i][k])
        {
        flag=1;
        break;
         }
        }

        if(flag==0)
        unique++;
    }

    if(unique>max)
    {
        max=unique;
        index=i;
        }
    }

    printf("%d",index);

    return 0;
}