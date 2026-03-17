#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int a[10][10];

    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    int count=0;

    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    {
    int rowMin=1, colMax=1;
    for(int k=0;k<c;k++)
     if(a[i][k] < a[i][j])
     rowMin=0;

    for(int k=0;k<r;k++)
      if(a[k][j] > a[i][j])
      colMax=0;

      if(rowMin && colMax)
      count++;
        }
    }

    printf("%d",count);

    return 0;
}