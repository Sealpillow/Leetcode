#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
     0 1 2 3 4 5 6 7 8  x- represent the vertice(shown as 0 in the input)

 0   x 1 1 1 0 0 0 0 0 -> vertice'0' connects to vertice 1,2,3
 1   1 x 0 0 0 0 1 0 0 -> vertice'1' connects to vertice 0,6
 2   1 0 x 1 0 1 0 0 0 -> vertice'2' connects to vertice 0,3,5
 3   1 0 1 x 0 1 1 0 0 -> vertice'3' connects to vertice 0,2,5,6
 4   0 0 0 0 x 0 1 1 0 -> vertice'4' connects to vertice 6,7
 5   0 0 1 1 0 x 0 0 0 -> vertice'5' connects to vertice 2,3
 6   0 1 0 1 1 0 x 1 0 -> vertice'6' connects to vertice 1,3,4,7
 7   0 0 0 0 1 0 1 x 1 -> vertice'7' connects to vertice 4,6,8
 8   0 0 0 0 0 0 0 1 x -> vertice'8' connects to vertice 7
*/

//check if the current vertice connect with 2 other vertices, that connect to each other
int check(int arr[], int user[][21],int len) //to find connections
{
    /*every connections in the row, is collected in arr[]
                                   0 1 2 3 4 5 6 7 8
      e.g for row 0, arr=[1,2,3] : x 1 1 1 0 0 0 0 0
      so now ill check from the input if there is a connection between the connections in arr[]
                               1   1 x 0 0 0 0 1 0 0 -> vertice'1' connects to vertice 0,6
                               2   1 0 x 1 0 1 0 0 0 -> vertice'2' connects to vertice 0,3,5
                               3   1 0 1 x 0 1 1 0 0 -> vertice'3' connects to vertice 0,2,5,6
    so if there is a connection at 1->2, in the user input array will have a value of 1
    but it has a zero in the case, hence it will not be a triangle,
    but there is connection from 2->3 in the user input there is a 1, hence 0->2->3 will be a triangle
    */
    for(int i=0;i<len-1;i++) //checking thru userinput for connections in arr
    {
        for(int j=1;j<len;j++)
        {
            if(user[arr[i]][arr[j]]==1) //if the 2 vertices are connected, it is a triangle
            {
                return 1;
            }
        }
    }
    return -1; // none of the pairs are connected hence no triangle
}





int main()
{
    int n,input[21][21],list[21],weak[21],index,x,y=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    scanf("%d",&input[i][j]);
                }
            }
            for(int i=0;i<n;i++)
            {
                x=0;
                for(int j=0;j<n;j++)
                {
                    if(input[i][j]==1) //append the vertices that connects to that 1 vertice
                    {
                        list[x]=j;
                        x++;
                    }
                }
                if(check(list,input,x)==-1)//change value to 1 to find connected(triangle) and -1 to find not connected(no triangle)
                {
                    weak[y]=i;
                    y++;
                }

            }
            for(int i=0;i<y;i++)
            {
               printf("%d ",weak[i]);
            }
            y=0;
            memset(list,'\0',21);
            memset(input,'\0',21);
            memset(weak,'\0',21);
            putchar('\n');
        }
    }
}
