#include <stdio.h>

int main()
{
    int n,a[100],closest;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    closest=a[0];

    for(int i=1;i<n;i++)
    {
        if((a[i]<0?-a[i]:a[i])<(closest<0?-closest:closest))
            closest=a[i];
    }

    printf("%d",closest);

    return 0;
}