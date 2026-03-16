#include <stdio.h>

int main()
{
    int n, a[100], i;
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int min = a[0], maxProfit = a[1]-a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]-min > maxProfit)
            maxProfit = a[i]-min;
        if(a[i] < min)
            min = a[i];
    }

    printf("%d", maxProfit);

    return 0;
}