#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*
similar to set function:
input:  2
        4
string: saskatoon
        toronto
        winnipeg
        toronto
        vancouver

word[0]= {s,a,s,k,a,t,o,o,n}
word[1]= {t,o,r,o,n,t,o}
word[2]= {w,i,n,n,i,p,e,g}
word[3]= {t,o,r,o,n,t,o}
word[4] ={v,a,n,c,o,u,v,e,r}

check function is used to check if word is in list[], if it not in list[] add it to list, else skip to next.

list[0]= saskatoon
list[1]= toronto
list[2]= winnipeg
list[3] =vancouver

*/
bool check(char cities[100][21], char cities_list[100][21], int number, int y, int len)
{
    bool status1 =false;
    for(int i=0;i<len+1;i++)
    {
        if(strcmp(cities[y],cities_list[i])==0) //if same
        {
            return status1=true;
        }
    }       
    return status1;
}

int main() {

    int t,n,l,count[50]={0};  
    char string[21];
    bool status;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int list_num=0;
        char word[100][21],list[100][21];
        scanf("%d",&n);
        for(int k=0;k<n;k++)
        {
            scanf("%s",string); 
            int length = strlen(string);
            for(int j=0;j<length+1;j++)
            {
                word[k][j]= string[j]; // add input chars into words
            } 
        }
        //add first word to list
        l =strlen(word[0]); 
        for(int j=0;j<l+1;j++)
        {
            list[0][j]=word[0][j]; //add first word chars into list 
        }
        list_num++;

        for(int x=1;x<n;x++) //x=1; start from 2nd word[]
        {
            status = check(word,list,n,x,list_num);
            if(status==false) // if word not in list
            {
                l =strlen(word[x]);
                for(int j=0;j<l+1;j++)
                {
                    list[list_num][j]=word[x][j]; //add word into list 
                }
                list_num++;
            }
        }
        //clear list
        for(int x=0;x<list_num;x++)
        {
            int length2=strlen(list[x]);
            for(int k=0;k<length2;k++) 
            {

                list[x][k]=' '; //set all to blanks             
            }
        }
        count[i] = list_num; //insert unique num of cities to count[i]
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",count[i]); // display unique num of cities 
    }

    return 0;
}
