#include <stdio.h>
#include <string.h>

int main() {
    int length,temp,pos[3]={1,2,3}; //pos[3], 3 is the positions number. The element:{1,2,3} is the ball number.
    char string[50];
    scanf("%s",string);
    length = strlen(string);
    //swap ball number to the position number
    for(int i=0;i<length;i++)
    {
        if(string[i]=='A')
        {
            temp=pos[0];
            pos[0]=pos[1];
            pos[1]=temp;

        }
        else if(string[i]=='B')
        {
            temp=pos[1];
            pos[1]=pos[2];
            pos[2]=temp;
        }
        else
        {
            temp=pos[2];
            pos[2]=pos[0];
            pos[0]=temp;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(pos[i]==1)
        {
            printf("%d",i+1);
        }
    }
    
    return 0;
}
