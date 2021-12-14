#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct birthday
{
    char name[20];
    int rating;
    char date[6];
};
struct datelist
{
    char d[20];
    int max;
};



int main() {
    struct birthday person[2001];
    struct datelist p[2001];
    int num_of_input,num_of_date=0;
    char list[2001][11], temp[11];
    scanf("%d",&num_of_input);
    //get the list of every person birthdays
    for(int i=0;i<num_of_input;i++)
    {

        scanf("%s %d %s",&person[i].name,&person[i].rating,&person[i].date);
        int count=1;
        for(int x=0;x<num_of_input;x++)
        {
            if(strcmp(p[x].d,person[i].date)==0) //if the date has alr been in the list of unique birthdays
            {
                count=0;
            }
        }
        if(count==1)//if is not inside, add in into the list and increment index of list
        {
            strcpy(p[num_of_date].d,person[i].date);
            num_of_date++;
        }
    }
    // to find the max val for each unique bithday
    for(int i=0;i<num_of_input;i++)
    {
        for(int x=0;x<num_of_input;x++)
        {
            if(strcmp(person[i].date,p[x].d)==0 && person[i].rating>p[x].max)
            {
                p[x].max = person[i].rating;
            }
        }
    }


    //put all max rating of each date into a list
    int num_of_list=0;
    for(int x=0;x<num_of_date;x++)
    {
        for(int i=0;i<num_of_input;i++)
        {
            if(p[x].max==person[i].rating) // check thru all the inputs to match the max rating of each date to the name onto the list
            {
                strcpy(list[num_of_list],person[i].name);
                num_of_list++;
            }
        }
    }
    printf("%d\n",num_of_list);
    for(int i=0;i<num_of_list;i++)
    {
        for(int j=i+1;j<num_of_list;j++)
        {
            if(strcmp(list[i],list[j])>0) // compare the total sum of each alphabet if one is bigger-> switch
            {
                strcpy(temp,list[i]);
                strcpy(list[i],list[j]);
                strcpy(list[j],temp);
            }
        }
    }
    for(int i=0;i<num_of_list;i++) // print out list of max rating
    {
        printf("%s\n",list[i]);
    }
    return 0;
}
