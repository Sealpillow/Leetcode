//brokenswords.c
#include <stdio.h>

int main() {

    int num,min,tb,lr,arr[4]={0};
    char s[5];
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {   
        scanf("%s",s);
        for(int x=0;x<4;x++)
        {
            if(s[x]=='0')
            {
                arr[x]++;
            }
        }
    }
    tb = arr[0]+arr[1];
    lr = arr[2]+arr[3];
    int qtb=tb/2;
    int qlr=lr/2;

    if(qtb<qlr)
    {
        min=qtb;
    }
    else 
    {
        min=qlr;
    }
    int rtb=tb-min*2;
    int rlr=lr-min*2;

    printf("%d %d %d",min,rtb,rlr);
    return 0;
}
