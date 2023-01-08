#include<stdio.h>
int main()
{
    int a,b,c,d,s=0,i;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(i=a;i<=b;i++)
    {
        if(i%c==0 && i%d!=0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}