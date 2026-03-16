
#include <stdio.h>

int main()
{
    int n,i,a[100],total=0,left=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        total=total+a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(left==total-left-a[i])
        {
            printf("%d",i);
            return 0;
        }
        left=left+a[i];
    }
    
    printf("-1");
    return 0;
}
