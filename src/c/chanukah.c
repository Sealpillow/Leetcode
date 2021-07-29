#include <stdio.h>

int main() {

    int k,n,num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        int sum=0;
        scanf("%d %d",&k,&n);
        for(int x=1;x<n+1;x++)
        {
            sum+=x;
        }
        sum+=n;
        printf("%d %d\n",k,sum);
    }
 
    return 0;
}
