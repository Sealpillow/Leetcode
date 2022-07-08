#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c;
    int left=0, right=0,status=1;
    while(scanf("%c",&c))
    {
        if(c=='\n')
        {
            break;
        }
        if(c=='|' && status ==1)
        {
            left++;
        }
        if(c==')')
        {
            status = 0;
        }
        if(c=='|'&& status == 0)
        {
            right++;
        }
    }
    if(left == right)
    {
        printf("correct");
    }
    else
    {
        printf("fix");
    }
}
