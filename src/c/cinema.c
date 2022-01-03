#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*  in a case:
    5 4
    4 5 2 1
    seats=5 4 groups=4
    the first 4 will seat in, the 5 will leave as there is not enough space,
    2 will leave too, 
    but the 1 will seat in, as there is a seat for the person.
    so the total group that left is 2, count=2
*/

int main()
{
    int seats,num,groups,total=0,count=0;
    char encrypted[202],key[202],msg,*p;
    scanf("%d %d",&seats,&groups);
    for(int i=0;i<groups;i++)
    {
        scanf("%d",&num);
        total+=num; // add to total
        if(total>seats)//check if exceed 
        {
            //remove the num from the total, as they would be angry 
            //and leave for not enough space, hence would not be taking the seats
            total-=num; 
            count++; //count the number of group that left
        }
    }
    printf("%d",count);
}
