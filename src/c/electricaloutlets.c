#include <stdio.h>

int main() {

    int  n,test[20]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k,o,total = 0;
        scanf("%d",&k);
        for(int i=0;i<k;i++)
        {
            scanf("%d",&o);
            total = total + o;

        }
        test[i] = total - k + 1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",test[i]);
    }
    return 0;
}
