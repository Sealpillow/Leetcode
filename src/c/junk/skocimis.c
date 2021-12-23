#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*

1 2 3 4 5 6 7 8 9
    a   b       c
        a     b c <- since b-a<c-b: a=b,b=c-1;
        a b   c  <- since b-a>c-b: c=b, b=a+1;
          a b c <- since b-a<c-b: a=b,b=c-1;

i have set since b-a<=c-b
When b-a=c-b it can be either for since b-a<c-b or since b-a>c-b doesnt matter
*/
/* something to learn: for while loop for 2 condition to be satisfied, see logic
e.g b-a==3 c-b==1
while((b-a!=1)||(c-b!=1)) <- while(True || False) = while(True) hence
{                            it will continue loop until b-a==1 c-b==1
}                            which will give while(False || False)
                             which then exit the loop

while((b-a!=1)&&(c-b!=1)) <- while(True && False) = while(False) hence it will break the loop
{
}

*/
int main()
{
    int a,b,c,count=0;
    scanf("%d %d %d",&a,&b,&c);
    while((b-a!=1)||(c-b!=1)) // e,g
    {
        if(b-a<=c-b)
        {
            a=b;
            b=c-1;
        }
        else
        {
            c=b;
            b=a+1;
        }
        count++;
    }
    printf("%d",count);
}
