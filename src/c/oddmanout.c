//oddmanout.c
#include <stdio.h>
#include <stdbool.h>

int main() {

    int num,g,c,temp,number;
    bool same=false;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&g);
        int list[1000]={0},num[1000]={0};
        
        for(int k=0;k<g;k++)
        {
            scanf("%d",&c);
            for(int a=0;a<k+1;a++)
            {
                if(list[a]==c)
                {
                    same=true;
                    temp = a;
                }                       
            }
            if(same==true)
            {
                num[temp]++;
                same=false;
            }
            else
            {
                list[k]=c;
            }    
        }

        for(int j=0;j<g;j++)
        {
            if(num[j]==0&&list[j]>0)
            {
                number = j;   
            }
        }
        printf("case #%d: %d\n",i+1,list[number]);
    }

    return 0;
}
