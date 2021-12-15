#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {

    int n,c,list[20],spot,avg;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int total=0,dist=0;
        scanf("%d",&c);
        for(int x=0;x<c;x++)
        {
            scanf("%d",&spot);
            list[x]=spot;
            total+= spot;
        }
        //bubble sort to sort according to low to high
        for(int a=0;a<c-1;a++)
        {
            for(int b=0;b<c-a-1;b++)
            {
                if(list[b]>list[b+1])
                {
                    int temp = list[b];
                    list[b]= list[b+1];
                    list[b+1]= temp;
                }
            }
        }
        avg = total/c;
        // dist it to travel from the middle point to the first shop,
        // then from the first shop to the last,
        // then travel from the last shop till the parking spot
        dist = avg-list[0]+ list[c-1]-list[0] + list[c-1]-avg;
        printf("%d\n",dist);
    }
    return 0;
}
