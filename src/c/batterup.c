#include <stdio.h>

int main() {
    int n,base,count=0;
    float sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&base);
        if(base>=0)
        {
            sum+=base;
            count++; 
        }      
    }
    printf("%.16g\n",sum/count);
    return 0;
}
