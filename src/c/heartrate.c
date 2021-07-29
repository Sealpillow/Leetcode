#include <stdio.h>

int main() {
    int n,b;
    float p,bpm[1000][3]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %f",&b,&p);
        bpm[i][0] = 60*(b-1)/p; 
        bpm[i][1] = 60*b/p;
        bpm[i][2] = 60*(b+1)/p;
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%.4f %.4f %.4f\n",bpm[i][0],bpm[i][1],bpm[i][2]);
    }
    
    return 0;
}
