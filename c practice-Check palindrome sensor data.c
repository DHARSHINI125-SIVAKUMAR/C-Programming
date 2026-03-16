#include <stdio.h>

int main()
{
    int n, a[100], i, flag=1;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n/2;i++)
        if(a[i]!=a[n-1-i])
            flag=0;

    if(flag)
        printf("Yes");
    else
        printf("No");

    return 0;
}