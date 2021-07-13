#include <stdio.h>
#include <string.h>

int main() {

    int length,day=0;
    char string[300];
    scanf("%s",string);
    length= strlen(string);
    for(int i=0;i<length;i++)
    {
        if((i+1)%3==1)//p
        {
            if(string[i]!='P')
            {
                printf("%c",string[i]);
                day++;
            }    
        }
        else if((i+1)%3==2)//e
        {
            if(string[i]!='E')
            {
                printf("%c",string[i]);
                day++;
            } 
        }
        else if ((i+1)%3==0)
        {
            if(string[i]!='R')
            {
                printf("%c",string[i]);
                day++;
            } 
        }
        
    }
    printf("%d",day);

    return 0;
}
