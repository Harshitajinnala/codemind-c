#include<stdio.h>
int main()
{
    int a,b,c=0,q,t=0,r;
    scanf("%d%d",&a,&b);
    int i,j;
    for(i=a;i<=b;i++)
    {
        q=i;
        c=0;
        t=0;
        while(q!=0)
        {
            c++;
            r=q%10;
            if(r!=0 && i%r==0)
            {
                t++;
            }
            q=q/10;
        }
        if(c==t)
        {
            printf("%d ",i);
        }
    }
}