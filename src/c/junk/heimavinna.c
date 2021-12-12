#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char input[1000],*p,sort[1000][1000],str1[5],str2[5],x,y;
    int total=0;
    fgets(input,1000,stdin);

    if(p=strchr(input,'\n'))
    {
        *p='\0';
    }
    int len=strlen(input);
    int j=0,g=0,count=0;
    for(int i=0;i<len;i++)
    {
        if(input[i]==';')
        {
            j++;
            g=0;
        }
        else
        {

            sort[j][g]= input[i];
            g++;
        }
    }

    for(int c=0;c<j+1;c++)
    {
        if(strchr(sort[c],'-'))
        {
            int len2=strlen(sort[c]);
            int a=0;
            printf("sortj:%s\n",sort[c]);
            for(int k=0;k<len2;k++)
            {
                if(sort[c][k]=='-')
                {
                    int b=0;
                    for(int w=k+1;w<len2;w++)
                    {
                        str2[b] = sort[c][w];
                        b++;
                    }
                    break;

                }
                else
                {
                    str1[k] = sort[c][k];
                    printf("%c\n",str1[k]);
                }

            }
            int num1 = atoi(str1);
            int num2 = atoi(str2);
            total+= num2-num1+1;
            printf("%d %d\n",num1,num2);
            memset(str1,'\0',5);
            memset(str2,'\0',5);
            printf("%s %s\n",str1,str2);

        }
        else
        {
            printf("word:%s\n",sort[c]);
            total++;
        }

    }

    printf("%d",total);
    return 0;
}
