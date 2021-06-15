#include <stdio.h>
#include <math.h>

int main() {

    int num,p,total=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&p);
        int x=p/10;
        int y=p%10;
        total=total+pow(x,y);
       
    }
    printf("%d",total);

}
