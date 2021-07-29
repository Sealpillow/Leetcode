#include <stdio.h>
#include <stdbool.h>

bool check(int card,char suit)
{
    if(card==suit)//if dominant
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main() {
    int n,sum=0;
    char b,c1,c2;
    bool status;
    scanf("%d %c",&n,&b);
    for(int i=0;i<4*n;i++)
    {
        scanf(" %c%c",&c1,&c2);
        //ignore c1 = 8/7 as it does not add to sum
        if(c1=='A')
        {
            sum+=11;
        }
        else if(c1=='K')
        {
            sum+=4;
        }
        else if(c1=='Q')
        {
            sum+=3;
        }
        else if(c1=='T')
        {
            sum+=10;
        }
        else
        {
            status = check (c2,b);
            if(status==true)
            {
                if(c1=='J')
                {
                    sum+=20;
                }
                else if(c1=='9')
                {
                    sum+=14;
                }
            }
            else
            {
                //c1==9 add 0 
                if(c1=='J')
                {
                    sum+=2;
                }
            }
        }
        
    }
    printf("%d\n",sum);
    return 0;
}
