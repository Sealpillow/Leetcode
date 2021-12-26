#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char input[2049],*p;
    fgets(input,2049,stdin); //get input string
    if(p=strchr(input,'\n'))
    {
        *p='\0';
    }
    int len=strlen(input);
    for(int i=0;i<len;i++)
    {
        if(input[i]==':'||input[i]==';')
        {
            if(input[i+1]==')')
            {
                printf("%d\n",i);
                i+=1;
            }
            else if(input[i+1]=='-')
            {
                if(input[i+2]==')')
                {
                    printf("%d\n",i);
                    i+=2;
                }
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}
