#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check(char word[80][80],int count)
{
    int result;
    bool dup;
    char temp[1][80];
    for(int x=0;x<count;x++)
    {
        int length=strlen(word[x]);
        for(int i=0;i<length;i++)
        {
            temp[1][i]=word[x][i];
        }

        for(int i=x;i<count-1;i++)
        {
            
            result = strcmp(temp[1], word[i+1]);
            printf("%s %s\n",temp[1],word[i+1]);
            if(result==0)
            {
                dup=true;
                return dup;
            }
            else
            {
                dup=false;
            }
            
         }
    }
    return dup;
}

int main() {

    int k=0;
    char str[80],alpha[26][80];

    bool status;
 
    while(scanf("%s ",str)==1)
    {
        int length = strlen(str);
        for(int i=0;i<length;i++)
        {
            alpha[k][i]=str[i];
        }
        k++;
    }

    status = check(alpha,k);

    if(status==true)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    
    return 0;
}
