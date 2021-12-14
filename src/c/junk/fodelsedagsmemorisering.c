#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct birthday
{
    char name[20];
    int rating;
    char date[5];
};
struct datelist
{
    char d[20];
    int max;
};



int main() {
    struct birthday person[20000];
    struct datelist p[20000];
    int n,y=0;
    char list[20000][20], temp[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %s",&person[i].name,&person[i].rating,&person[i].date);
        int count=1;
        for(int x=0;x<20;x++)
        {
            if(strcmp(p[x].d,person[i].date)==0)
            {
                count=0;
            }
        }
        if(count==1)
        {
            strcpy(p[y].d,person[i].date);
            y++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<20;x++)
        {
            if(strcmp(person[i].date,p[x].d)==0 && person[i].rating>p[x].max)
            {
                p[x].max = person[i].rating;
            }
        }
    }


    //put all max rating of each date into a list
    int k=0;
    for(int x=0;x<n;x++)
    {
        for(int i=0;i<n;i++)
        {
            if(p[x].max==person[i].rating)
            {
                printf("%d %d\n",p[x].max,person[i].rating);
                strcpy(list[k],person[i].name);
                k++;
            }
        }
    }
    printf("k: %d\n",k);
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(strcmp(list[i],list[j])>0)
            {
                strcpy(temp,list[i]);
                strcpy(list[i],list[j]);
                strcpy(list[j],temp);
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%s\n",list[i]);

    }
    return 0;
}
