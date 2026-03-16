#include <stdio.h>
int main()
{
    int n,a[100],i,max=1,len=1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            len++;
        else
            len=1;

        if(len>max)
            max=len;
    }

    printf("%d",max);

    return 0;
}