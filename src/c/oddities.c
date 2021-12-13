#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(abs(num)%2==0)
        {
            printf("%d is even\n",num);
        }
        else
        {
            printf("%d is odd\n",num);
        }
    }
    return 0;
}
