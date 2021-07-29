#include <stdio.h>
#include <math.h>
int reverse(int sum)
{
    int num,total=0;
    
    for(int i=2;i>=0;i--)
    {
        num = sum%10;
        total = total + num*pow(10,i);
        sum = sum/10;  
    }
    return total;
}

int main() {

    int a,b,largest;

    scanf("%d %d",&a,&b);
    a=reverse(a);
    b=reverse(b);
    if(a>b)
    {
        largest= a;
    }
    else
    {
        largest= b;
    }
    printf("%d",largest);
    return 0;
}
