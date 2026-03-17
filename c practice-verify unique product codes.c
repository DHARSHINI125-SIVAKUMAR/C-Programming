#include <stdio.h>

int main()
{
    int n,a[100],i,j,flag=1;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
                flag=0;

    if(flag)
        printf("Yes");
    else
        printf("No");

    return 0;
}