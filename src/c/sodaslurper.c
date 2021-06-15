//sodaslurper.c
int main() {

    int e,f,c,r,q=1,start=0,end=0;
    scanf("%d %d %d",&e,&f,&c);
    start=e+f;
    while(q!=0)
    {
        q=start/c;
        r=start%c;
        start=q+r;
        end+=q;
    }
    printf("%d",end);

    return 0;
}
