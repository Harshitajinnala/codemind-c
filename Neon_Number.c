#include<stdio.h>
int main()
{
    int n,sq,i,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        i=sq%10;
        sum=sum+i;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
