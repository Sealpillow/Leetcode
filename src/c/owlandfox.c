//owlandfox.c
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int n,length;
    char s[7];
    scanf("%d",&n);

    for(int i=0;i<n;i++)// read number of inputs
    {
        int sum=0,num=0;
        scanf("%s",s);
        length = strlen(s);
        for(int i=length-1;i>=0;i--)// sum of digits, covert char number to int number
        {
            sum+=(s[i]-'0');
            num+=(s[i]-'0')*(pow(10,length-i-1));
        }
        for(int x=num;x>=0;x--)//read all num
        {
            int sum2=0,num2=x;

            for(int y=length-1;y>=0;y--)// check sum
            {   
                int d2=num2%10;
                sum2+=d2;
                num2=num2/10;
            }
            if(sum2==sum-1)
            {
                printf("%d\n",x);
                break;
            }

        }

    }
    return 0;
}
