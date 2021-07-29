#include <stdio.h>

int main() {
    int pi[6]={1,1,2,2,2,8},p,p1,p2,p3,p4,p5;
    scanf("%d %d %d %d %d %d",&p,&p1,&p2,&p3,&p4,&p5);
    printf("%d %d %d %d %d %d",pi[0]-p,pi[1]-p1,pi[2]-p2,pi[3]-p3,pi[4]-p4,pi[5]-p5);
    return 0;
}
