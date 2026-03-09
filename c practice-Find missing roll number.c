#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum=0,expected,missing;
    scanf("%d",&n);
    
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    expected=n*(n+1)/2;
    missing=expected-sum;
    
     printf("%d",missing);
    

    return 0;
}