
#include<stdio.h>
int main()
{
    int n,m,rev,r,post,i;
    scanf("%d",&n);
    while(n>0)
    {
        rev=0;
        m=++n;
        int s=m;
        while(m>0)
        {
            r=m%10;
            rev=rev*10+r;
            m=m/10;
        }
        if(rev==s)
        {
            for(i=2;i<=rev;i++)
            {
                if(rev%i==0)
                {
                    break;
                }
            }
            if(rev==i)
            {
                post=rev;
                break;
            }
        }
    }
    printf("%d",post);
}
