//sevenwonders.c
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int t=0,c=0,g=0,total,length,low,set=0,count=0;
    char alpha[50];//set size no more than 50
    scanf("%s",alpha);//get line
    length = strlen(alpha);// count the number of character in string

    for(int i=0;i<length;i++)// sort based on their card, counting the number
    {
        if(alpha[i]=='T')
        {
            t++;
        }

        else if(alpha[i]=='C')
        {
            c++;
        }

        else
        {
            g++;
        }
        count++;
    }
    if(t<c) // find the number of set
    {
        low=t;
    }
    else
    {
        low =c;
    }
    if(g<low)
    {
        low=g;
    }
    set=low;
    total = pow(t,2)+pow(c,2)+pow(g,2) + set*7;
    printf("%d",total);
    return 0;
}
