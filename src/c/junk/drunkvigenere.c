#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*

*/

int main()
{
    int index,len;
    char encrypted[201],key[201],msg[201];
    scanf("%s",encrypted);
    scanf("%s",key);
    len = strlen(encrypted);
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        {
            //since shift forward msg[i] + key[i] = encrypted[i],
            // therefore msg[i] = encrypted[i] - key[i] e.g R= abs(A-R),20= abs(-20)
            index = abs(encrypted[i]-'A'-(key[i]-'A'));
        }
        else
        {
            // since shift backwards msg[i] - key[i] = encrypted[i], 
            // therefore msg[i] = encrypted[i] + key[i],%26 as it loops
            index = ((encrypted[i]-'A')+(key[i]-'A'))%26; 
        }
        printf("%d %c %c %d\n",i,encrypted[i],key[i],index);
        msg[i] = index+'A';
    }
    printf("%s",msg);
}
