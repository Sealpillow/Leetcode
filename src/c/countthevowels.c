#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char word[1001],low[1001],*p;
    fgets(word,1001,stdin);
    int len,count=0;
    len= strlen(word);
    for(int i=0;i<len;i++)
    {
        low[i]= tolower(word[i]);
    }
    for(int i=0;i<len;i++)
    {
        if(low[i]=='a'||low[i]=='e'||low[i]=='i'||low[i]=='o'||low[i]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
}
