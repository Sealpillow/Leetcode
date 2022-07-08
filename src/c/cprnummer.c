#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int total;
    char c[12],*p;
    fgets(c,12,stdin);
    if(p=strchr(c,'\n'))
    {
        *p='\0';
    }
    total= 4*(c[0]-48)+3*(c[1]-48)+2*(c[2]-48)+7*(c[3]-48)+6*(c[4]-48)+5*(c[5]-48)+4*(c[7]-48)+3*(c[8]-48)+2*(c[9]-48)+1*(c[10]-48);
    if(total%11==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
