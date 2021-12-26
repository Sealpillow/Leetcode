#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,num,total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        total= total+num;
    }
    printf("%d",total);
    return 0;
}
