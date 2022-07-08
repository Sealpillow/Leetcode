#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char name[31],postsec[11],year1[5],dob[11],year2[5];
    int num,course,y1,y2;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%s %s %s %d",name,postsec,dob,&course);
        strncpy(year1,postsec,4);
        strncpy(year2,dob,4);
        y1=atoi(year1);
        y2=atoi(year2);
        //printf("%d %d %d\n",y1,y2,course);
        if(y1>=2010)
        {
            printf("%s eligible\n",name);
        }
        else if(y2>=1991)
        {
            printf("%s eligible\n",name);
        }
        else if(y1<2010&&y1<2010&&course<41)
        {
            printf("%s coach petitions\n",name);
        }
        else
        {
            printf("%s ineligible\n",name);
        }
        memset(name,'\0',31);
        memset(postsec,'\0',11);
        memset(year1,'\0',5);
        memset(dob,'\0',11);
        memset(year2,'\0',5);
    }
}
