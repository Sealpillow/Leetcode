
#include <stdio.h>
#include <stdbool.h>

bool check(char move[],int num,int ptx,int pty)
{
    int x=0,y=0,degree=90;
    for(int i=0;i<num;i++)
    {  
        char movement= move[i];
        printf("%c",movement);
        if(movement=='L')
        {
            degree+=90;
            if(degree==360)
            {
                degree=0;
            }
        }
        else if(movement=='R')
        {
            degree-=90;
            if(degree==-90)
            {
                degree=270;
            }
        }
        else 
        {   
            if(degree==0)
            {
                x++;
            }
            else if(degree==90)
            {
                y++;
            }
            else if(degree==180)
            {
                x--;
            }
            else
            {
                y--;
            }
            
        }
        
    }
    printf(" end x:%d y:%d\n",x,y);
    if(x==ptx&&y==pty)
    {
        printf("true");
        return true; 
    }
    else
    {
        return false;
    }

}


int main() {

    int count,ptx,pty,k=0;
    bool found = false;
    scanf("%d %d",&ptx,&pty);
    scanf("%d",&count);
    char string[10],move[count];
    for(int i=0;i<count;i++)
    {
        scanf("%s",string);
        move[i] = string[0];
    }
    
    while(found!=true)
    {
        char temp = move[k];
        move[k] = 'F';
        found = check(move,count,ptx,pty);
        move[k] = 'L';
        found = check(move,count,ptx,pty);
        move[k] = 'R';
        found = check(move,count,ptx,pty);
        move[k]= temp;
        k++;
    }
    return 0;
}





