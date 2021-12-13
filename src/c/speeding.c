#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,t1,d1,t2,d2,spd,max=0;
    scanf("%d",&n);
    scanf("%d %d",&t1,&d1);
    for(int i=1;i<n;i++)
    {
        scanf("%d %d",&t2,&d2);
        spd= (d2-d1)/(t2-t1);
        t1=t2;
        d1=d2;
        if(spd>max)
        {
            max=spd;
        }
    }
    printf("%d",max);
    return 0;
}
