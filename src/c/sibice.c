//sibice.c
#include <stdio.h>
#include <math.h>

int main() {

    int n,w,h,x,y;
    scanf("%d %d %d",&n,&w,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        y=sqrt(pow(w,2)+pow(h,2));
        if(x<=y)
        {
            printf("DA\n");
        } 
        else
        {
            printf("NE\n");
        }
    }

    return 0;
}
