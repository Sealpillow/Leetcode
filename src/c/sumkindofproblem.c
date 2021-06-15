//sumkindofproblem.c
#include <stdio.h>

int main() {

    int num,k,n;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d %d",&k,&n);

        int s1=0,s2=0,s3=0;
        for(int i=1;i<n+1;i++)//s1
        {
            s1 = s1 + i;
            
            s2 = s2 + 1 + 2*(i-1); //calculate sum of x num of odd num if x=3 ,odd num = 1,3,5

            s3 = s3 + 2 + 2*(i-1); //calculate sum of x num of even num if x=3 ,odd num = 2,4,8
            
        }

        printf("%d %d %d %d\n",k,s1,s2,s3);
    }

    return 0;
}
