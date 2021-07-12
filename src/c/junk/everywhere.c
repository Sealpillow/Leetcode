#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char cities[100][21], char cities_list[100][21], int number, int y, int len)
{
    bool status1 =false;

    for(int i=0;i<len+1;i++)
    {
        printf("w1:%s w2:%s\n",cities[y],cities_list[i]);

        if(strcmp(cities[y],cities_list[i])==0) //if same
        {
            printf("not added:%s\n",cities[y]);
            return status1=true;
            
        }

    }
    
    printf("add:%s\n",cities[y]);
            
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
                word[k][j]= string[j]; //input into word array
                
            } 

        }

        l =strlen(word[0]); //add first word to list
        printf("list num:%d\n",list_num);
        for(int j=0;j<l+1;j++)
        {
            list[0][j]=word[0][j]; //add word into list 
        }
        list_num++;
        printf("no.unique cities:%d\n",list_num);
        printf("list:");
        for(int p=0;p<list_num;p++)//list_num+1 to include last of list
        {
            printf("%s,",list[p]);
        }
        printf("\n\n");


        for(int x=1;x<n;x++)
        {
            status = check(word,list,n,x,list_num);
            if(status==false) // if not in list
            {
                printf("adding:%s\n",word[x]);
                l =strlen(word[x]);
                printf("list num:%d\n",list_num);
                for(int j=0;j<l+1;j++)
                {
                    list[list_num][j]=word[x][j]; //add word into list 
                }
                list_num++;
            }
            printf("no.unique cities:%d\n",list_num);
            printf("list:");
            for(int p=0;p<list_num;p++)//list_num+1 to include last of list
            {
                printf("%s,",list[p]);
            }
            printf("\n\n");
        }


        for(int x=0;x<list_num+1;x++)//list_num+1 to include last of list
        {
            int length2=strlen(list[x]);
            printf("%d\n",length2);
            for(int k=0;k<length2;k++) //clear list
            {
                printf("%c",list[x][k]);
            }
            printf("\nlist:");
            
            
            for(int k=0;k<length2;k++) //clear list
            {

                list[x][k]=' ';                
            }
            
            printf("\n");
        }
        count[i] = list_num; //insert unique num of cities to count[i]

    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",count[i]); // display unique num of cities 
    }

    return 0;
}
