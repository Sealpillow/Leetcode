#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
e.g
0 20 2
2 2 2 -walk to bus stop
5 5 -bus travel
3 5 -[wait for bus]
walk to bus stop-> [wait for bus]-> bus travel

|2->[1]->5| -> |2->[0]->5| ->2(walk to sch)

*/
int main() {
    int s,t,n;
    int walk[1000],bus[1000],wait[1000];
    int total=0;
    int multiples;
    scanf("%d %d %d",&s,&t,&n);
    for(int i=0;i<n+1;i++)
    {
        scanf("%d",&walk[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bus[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wait[i]);
    }

    for(int i=0;i<n;i++)
    {
        total += walk[i]; // add time to walk to next bus stop
        if(total,wait[i]!=0) // check if additional time to wait for the bus
        {
            multiples = ceil((float)total/wait[i]); //get the number of multiples e.g 2/5 = 0.4 -> 1
            total += abs(total-wait[i]*multiples); //add the difference: 2-5 = -3 -> 3, total= total + difference(3)
        }
        total+= bus[i];
    }
    total += walk[n]; // add time to walk to sch from last bus stop
    if(total<=t)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
