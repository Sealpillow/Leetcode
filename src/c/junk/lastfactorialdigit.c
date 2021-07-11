#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    int t,n,sum[10]={0};
    scanf("%d",&t);
    for(int i=1;i<t+1;i++)
    {
        sum[i]++;
        scanf("%d",&n);

        for(int x=1;x<n+1;x++)
        {
            sum[i]=sum[i]*x;
            printf("i:%d x: %d s:%d\n",i,x,sum[i]);
        }
    }
    for(int i=1;i<t+1;i++)
    {
        printf("%d\n",sum[i]);
    }
    
    
    return 0;
}
