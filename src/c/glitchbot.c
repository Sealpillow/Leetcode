#include <stdio.h>
#include <stdbool.h>

bool check(char move[],int num,int ptx,int pty) // to count the final destination of x: y:
{
    int x=0,y=0,degree=90;
    for(int i=0;i<num;i++)
    {  
        char movement= move[i];
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
    if(x==ptx&&y==pty) //check if the final destination tally with the goal
    {
        return true; 
    }
    else
    {
        return false;
    }

}

int main() {

    int count,ptx,pty;
    bool found = false;
    scanf("%d %d",&ptx,&pty);
    scanf("%d",&count);
    char string[10],move[count];
    for(int i=0;i<count;i++)
    {
        scanf("%s",string);
        move[i] = string[0];
    }
    
    for(int i=0;i<count;i++)//checking all viable route by changing one variable at a time
    {
        int pos;
        char temp = move[i]; //store variable move[i] in temp
        //change the variable by F,L,R
        //pos = line number
        move[i] = 'F';
        found = check(move,count,ptx,pty);
        if(found==true)
        {
            pos = i+1;
            printf("%d Forward",pos);
            break;
        }
        move[i] = 'L';
        found = check(move,count,ptx,pty);
        if(found==true)
        {
            pos = i+1;
            printf("%d Left",pos);
            break;
        }
        move[i] = 'R';
        found = check(move,count,ptx,pty);
        if(found==true)
        {
            pos = i+1;
            printf("%d Right",pos);
            break;
        }
        move[i]= temp; //return move[i] to its original variable
    }
    return 0;
}

