#include <stdio.h>

int main() {

    int t,n,sum[10]={0};
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        sum[i]++; //set all variable in array sum[i]={1};
        scanf("%d",&n);

        for(int x=1;x<n+1;x++)
        {
            sum[i]=sum[i]*x; // i*x, x as increment of 1
        }
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",sum[i]%10); //last digit of the sum,hence ur remainder to find the ones digit.
    }
    
    return 0;
}
