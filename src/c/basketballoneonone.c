//basketballoneonone.c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    int length,Ascore=0,Bscore=0;
    char s[200];
    bool tie = false;
    scanf("%s",s);
    length = strlen(s);

    for(int i=0;i<length;i+=2)
    {

        if(s[i]=='A')
        {
            
            if(s[i+1]=='1')
            {
                Ascore++;
            }
            else
            {   
                Ascore+=2;
            }

        }
        else
        {    
            if(s[i+1]=='1')
            {
                Bscore++;
            }
            else
            {   
                Bscore+=2;
            }
        }

        int diff = Ascore-Bscore;
        if(Ascore==10&&Bscore==10)
        {
            tie = true;
        }
        if(tie==true&&diff>=2)
        {
            printf("A");
        }
        if(tie==true&&diff<=-2)
        {
            printf("B");
        }
        if(Ascore>10&&Bscore<10)
        {
            printf("A");
        }
        if(Bscore>10&&Ascore<10)
        {
            printf("B");
        }

    }

    return 0;
}
