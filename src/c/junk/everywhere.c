#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char cities[100][21], char cities_list[100][21], int number, int y, int len)
{
    bool status1;
    printf("%d\n",len);
    
    for(int i=0;i<=len;i++)
    {

        if(strcmp(cities[y],cities_list[i])!=0)
        {
            printf("w1:%s w2:%s\n",cities[y],cities_list[i]);
            status1 =false;
        }
        else
        {

           return status1=true;
        }

    }        
    
    return status1;
    

}



int main() {

    int t,n,test[50]={0},count[10]={0};  
    char string[21];
    bool status;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        test[i]++;
        //count[i]=0;
        int list_num=0;
        char word[100][21],list[100][21];
        scanf("%d",&n);
        for(int k=0;k<n;k++)
        {
            scanf("%s",string); 
            int length = strlen(string);
            for(int j=0;j<length+1;j++)
            {
                word[k][j]= string[j];
            }
            

        }

        for(int x=0;x<n;x++)
        {
            status =check(word,list,n,x,list_num);
            if(status==false) // if not in list
            {
                int l =strlen(word[x]);
                for(int j=0;j<l;j++)
                {
                    list[x][j]=word[x][j];
                }
                list_num++;
            }
            printf("%s\n",list[x]);
            printf("%s %s %s %s %s\n",list[0],list[1],list[2],list[3],list[4]);

        }
        for(int x=0;x<list_num+1;x++)//list_num+1 to include last of list
        {
            int length2=strlen(list[x]);
            for(int k=0;k<length2;k++)
            {
                list[x][k]='\0';
            }
        }
        count[i] = list_num;
        printf("clear:%s %s %s %s %s\n",list[0],list[1],list[2],list[3],list[4]);
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",count[i]);
    }
  


    return 0;
}



