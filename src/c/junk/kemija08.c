#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,len;
    char word[101],*p;
    fgets(word,101,stdin);
    if(p=strchr(word,'\n'))
    {
        *p='\0';
    }
    for(int i=0;i<strlen(word);i++)
    {
        printf("%c %d\n",word[i],len);
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        {
            memmove(word+i+1,word+i+3,strlen(word));
        }
        printf("%s\n",word);
    }
}
