#include<stdio.h>
int main()
{
    int r,n,s=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        sq=sq/10;
        s=s+r;
        
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else 
    {
        printf("Not Neon Number");
    }
}