#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*

*/

int main()
{
    int index,len,c=0;
    char encrypted[202],key[202],msg,*p;
    scanf("%s",encrypted);
    scanf("%s",key);
    len = strlen(encrypted);
    for(int i=0;i<len;i++)
    {
        int index1= encrypted[i]-'A';
        int index2= key[i]- 'A';
        if(i%2==0)
        {
            //since shift forward msg[i] + key[i] = encrypted[i],
            // therefore msg[i] = encrypted[i] - key[i] e.g R= abs(A-R),20= abs(-20)
            index = (index1-index2);
        }
        else
        {
            // since shift backwards msg[i] - key[i] = encrypted[i],
            // therefore msg[i] = encrypted[i] + key[i],%26 as it loops
            index = (index1+index2)%26;
        }
        //printf("%d %d",index1,index2);
        if(index<0) //in a case where by (3-5)=-2 it will have to (26-index)shift back loop
        {
            msg= (26+index) +'A';
        }
        else
        {
            msg = index + 'A';
        }
        putchar(msg);
    }
}
