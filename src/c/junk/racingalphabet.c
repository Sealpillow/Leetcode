#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
ACA: A->C
      <-
2 grids from A to C
2 grids back from C to A

We start of by getting the whole input into an array,
set the first char as the prev_index
compare the index between the prev and the current
the difference will be the number of grid the player travel.
for space and apostrophe, I've set them index 27,28 respectively as per order on the board
Calculate the total number of differences between each char and use it calculate the time taken
time = total distance/speed + number of alphabets(as 1 alphabet = 1sec)
*/
int get_index(char c)
{
     if(c==' ')
    {
        return 26;
    }
    else if(c=='\'')
    {
        return 27;
    }
    else
    {
        return c-'A';
    }
}
int main()
{
    double grid_dist= 3.14159265359*60/28,time;
    //each pick up will take 1 sec, so how many alpha = + number of sec
    char user[200],*p;
    int grids,n,diff;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {

        fgets(user,200,stdin);
        if(p=strchr(user,'\n'))
        {
            *p='\0';
        }
        grids=0;
        int len = strlen(user);
        int index, prev_index= get_index(user[0]);
        for(int j=1;j<len;j++)
        {
            index = get_index(user[j]);
            diff = abs(prev_index-index);
            printf("%c %c\n",prev_index+'A',user[j]);// ]->'
            if(diff>14)
            {
                //when diff exceed by half it will go the opposite way,as it would be shorter
                //eg. A to ' move 1 grid instead of going one big round, 27 grids
                grids+= (28-diff);
            }
            else
            {
                grids+= diff;
            }
            prev_index=index;
            printf("%d\n",grids);
        }
        // time = total distance/speed + number of alphabets(as 1 alphabet = 1sec)
        time= (grids*grid_dist/15+len);
        printf("%.9lf\n",time);
        memset(user,'\0',len);
    }
}
