#include <stdio.h>

int main() {
    
    int n,adv,r,e,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&r,&e,&c);
        adv = e-c;
        if(r>adv)
        {
            printf("do not advertise\n");
        }
        else if(r<adv)
        {
            printf("advertise\n");
        }
        else
        {
            printf("does not matter\n");
        }
    }
    return 0;
}
