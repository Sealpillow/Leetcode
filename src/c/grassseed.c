#include <stdio.h>

int main() {
    int n;
    float c,w,l,sum=0;
    scanf("%f",&c);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%f %f",&w,&l);
        sum = sum + w*l*c;
    } 
    printf("%.7f",sum);
    return 0;
}
