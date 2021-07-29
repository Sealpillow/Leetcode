#include <stdio.h>

int main() {

    int n,l,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&l);
        sum=sum+l;
    }
    sum = sum - (n-1)*1;
    printf("%d\n",sum); 
    
    return 0;
}
