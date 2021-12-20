#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int len;
    char input1[30],input2[30];
    scanf("%s %s",input1,input2);
    len = strlen(input1);
    if(input1[len-1]=='a'||input1[len-1]=='i'||input1[len-1]=='o'||input1[len-1]=='u')
    {
        input1[len-1]='\0';
        strcat(input1,"ex");
        strcat(input1,input2);
    }
    else if(input1[len-1]=='e')
    {
        strcat(input1,"x");
        strcat(input1,input2);
    }
    else if(input1[len-2]=='e'&&input1[len-1]=='x')
    {
        strcat(input1,input2);
    }
    else
    {
        strcat(input1,"ex");
        strcat(input1,input2);
    }
    printf("%s",input1);
}
