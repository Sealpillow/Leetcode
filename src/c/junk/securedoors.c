#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,count=1,add=0;

    char entry[1001][21];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char check[6],name[21];
        scanf("%s %s",check,name);

        if(strcmp(check,"entry")==0)
        {
            int c =0;
            for(int x=0;x<count;x++)
            {
                if(strcmp(entry[x],name)!=0)
                {
                    c++;
                }
            }
            if(c==count)
            {
                strcpy(entry[count],name);
                printf("%s entered\n",name);
                count++;
            }
            else
            {
                printf("%s entered (ANOMALY)\n",name);
            }
        }
        else
        {
            int status=0,index=0;
            for(int x=0;x<count;x++)
            {
                if(strcmp(entry[x],name)==0)
                {
                    status=1;
                    index=x;
                }
            }
            if(status==1)
            {
                printf("%s exited\n",entry[index]);
                memset(entry[index],'\0',strlen(entry[index]));
            }
            else
            {
                printf("%s exited (ANOMALY)\n",name);
            }
        }
    }


}
