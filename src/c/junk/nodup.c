#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool check(char word[81][81],int count)
{
    int result;
    bool dup;
    char temp[2][81];
    for(int x=0;x<count;x++)
    {
        int length=strlen(word[x]);
        for(int i=0;i<length+1;i++)
        {
            temp[0][i]=word[x][i];
        }

        for(int j=x;j<count-1;j++)
        {
            
            result = strcmp(temp[0],word[j+1]);
            printf("%s %s",temp[0],word[j+1]);

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
    char str[81],alpha[81][81];

    bool status=false;
 
    while(scanf("%s",str)==1)
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
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    
    return 0;
}
