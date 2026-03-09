#include <stdio.h>
int main()
{
    int n;
    int i,j,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int found=0;
        for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                found=1;
                break;
        }
    }
    if(found==0)
    {
        b[k]=a[i];
        k++;
    }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}