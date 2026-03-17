#include<stdio.h>

int main()
{
    int r,c,a[10][10],index=0;
    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    int max=1;

    for(int j=0;j<c;j++)
     max*=a[0][j];

    for(int i=1;i<r;i++)
    {
    int p=1;

    for(int j=0;j<c;j++)
     p*=a[i][j];

    if(p>max)
    {
     max=p;
     index=i;
        }
    }

    printf("%d",index);
    return 0;
}