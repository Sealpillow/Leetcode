#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,volume=7;
    char word[11],*p;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        fgets(word,11,stdin);
        if(p=strchr(word,'\n'))
        {
            *p='\0';
        }
        if(strcmp(word,"Skru op!")==0)
        {
            volume++;
        }
        else
        {
            volume--;
        }
        if(volume>10)
        {
            volume=10;
        }
        if(volume<0)
        {
            volume=0;
        }
        memset(word,'\0',10);
    }
    printf("%d",volume);

}
