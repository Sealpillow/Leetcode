#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,len,index =0,exist,prevstatus,prev=-1;
    char word[1001],arr[9][5],*c;

    for(int i=0;i<8;i++)
    {
        if(i==5||i==7)
        {
            for(int j=0;j<4;j++)
            {
                arr[i][j]='a'+index;
                //printf("%c",arr[i][j]);
                index++;
            }
            //putchar('\n');
        }
        else
        {
            for(int j=0;j<3;j++)
            {
                arr[i][j]='a'+ index;
                //printf("%c",arr[i][j]);
                index++;
            }
            //putchar('\n');
        }
    }
    scanf("%d",&n);
    getchar();
    for(int k=0;k<n;k++)
    {
        fgets(word,1000,stdin);
        if(c=strchr(word,'\n'))
        {
            *c='\0';
        }
        printf("Case #%d: ",k+1);
        len=strlen(word);
        for(int x=0;x<len;x++) // number of word
        {
            prevstatus = 1;
            exist = 0;
            for(int i=0;i<8;i++) // search thru the whole array
            {
                if(i==5||i==7)
                {
                    for(int j=0;j<4;j++)
                    {
                        if(arr[i][j]==word[x])
                        {
                            for(int y=0;y<j+1;y++)
                            {
                                //printf("i:%d prev %d, status: %d,k:%d\n",prev,prevstatus,x);
                                if(i==prev && prevstatus==1&& x>0)
                                {
                                    printf(" ");
                                    prevstatus=0;

                                }

                                printf("%d",i+2);
                                exist = 1;
                            }
                            prev = i;
                            break;
                        }
                    }
                }
                else
                {
                    for(int j=0;j<3;j++)
                    {
                        if(arr[i][j]==word[x])
                        {
                            for(int y=0;y<j+1;y++)
                            {
                                //printf("prev %d, status: %d,k:%d\n",prev,prevstatus,x);
                                if(i== prev&& prevstatus==1&& x>0)
                                {
                                    printf(" ");
                                    prevstatus = 0;

                                }

                                printf("%d",i+2);
                                exist=1;
                            }
                            prev = i;
                            break;
                        }
                    }
                }
            }
            if(exist == 0)
            {
                if(prev==9 && prevstatus==1&& x>0)
                {
                    printf(" ");
                    prevstatus = 0;

                }
                printf("0");
                prev = 9;
            }


        }
        memset(word,'\0',len);
        putchar('\n');
    }

}
