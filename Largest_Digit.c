#include<stdio.h>
int main()
{
    int a,n,i,m=0;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        if(m<a)
        {
            m=a;
        }
        n=n/10;
    }
    printf("%d",m);
}
