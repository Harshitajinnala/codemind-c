#include<stdio.h>
int main()
{
    int q,n,d,s=0;
    scanf("%d",&n);
    
    q=n;
     while(q>0)
    {
        d=q%10;
        s=s*10+d;
        q=q/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}