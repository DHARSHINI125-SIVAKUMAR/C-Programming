#include <stdio.h>
int main() {
    int n=4;                  
    int size=2*n-1;          
    int i,j;
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            int top=i;
            int left=j;
            int right=size-1-j;
            int bottom=size-1-i;
            int min_dist=top;
            if(left<min_dist)min_dist=left;
            if(right<min_dist)min_dist=right;
            if(bottom<min_dist)min_dist=bottom;
            printf("%d ",n-min_dist);
        }
        printf("\n");
    }
    return 0;
}