#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    // 1 unit length is 1, diagonal = sqrt(1+1)
    /*




    */

    int input[10],index=1;
    float length=0;
    for (int i=0;i<9;i+=3)
    {
        scanf("%d %d %d",&input[i],&input[i+1],&input[i+2]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++) // find the next
        {
            if(input[i]==input[j]-1)
            {
                int q1 = i/3;
                int r1 = i%3;
                int q2 = j/3;
                int r2 = j%3;
                printf("%d %d\n",abs(q1-q2),abs(r1-r2));
                if(abs(q1-q2)==abs(r1-r2)) //diagonal
                {
                    if((j+i)/2==4)
                    {
                        printf("2sqrt\n");
                        length += sqrt(2)*2;
                    }
                    else
                    {
                        printf("1sqrt\n");
                        length += sqrt(2);
                    }
                }
                else //straight
                {
                    printf("j+i:%d\n",j+i);
                    if((j+i)%2==0)
                    {
                        printf("add 2\n");
                        length += 1*2;
                    }
                    else
                    {
                        printf("add 1\n");
                        length += 1;
                    }
                }
                printf("%d %d\n",input[i],input[j]);
                printf("%.6f\n",length);
            }
        }

    }
    printf("%.6f",length);
}
