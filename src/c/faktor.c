#include <stdio.h>

int main() {
    int a,i,min;
    scanf("%d %d",&a,&i);
    if(a==1)
    {
        min = a*i;
    }
    else
    {
        min = a*(i-1)+1;
    }
    printf("%d",min);
    return 0;
}
