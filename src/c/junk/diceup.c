#include <stdio.h>

int main() {

    int n,m,max=0;
    scanf("%d %d",&n,&m);
    int sum[100]={0};
    for(int i=1;i<n+1;i++)
    {
        for(int x=1;x<m+1;x++)
        {
            sum[i+x]++;
        }    
    }
    for(int i=2;i<n+m+1;i++)
    {
        if(sum[i]>max)
        {
            max = sum[i];
            printf("max:%d s:%d\n",max,sum[i]);
        }
    }
    for(int i=2;i<n+m+1;i++)
    {
        if(sum[i]==max)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
