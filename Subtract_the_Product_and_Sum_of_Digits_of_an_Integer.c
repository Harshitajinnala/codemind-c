#include<stdio.h>
int main()
{
    int n,i,p=1,s=0,d;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        p=p*i;
        s=s+i;
        n=n/10;
    }
    d=p-s;
    printf("%d",d);
}
