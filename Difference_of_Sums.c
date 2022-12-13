#include<stdio.h>
int main()
{
    int i,n,d,q=0,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            s=s+i;
            q=q+i*i;
            
        }
        d=(s*s)-q;
        printf("%d",d);
    
}
