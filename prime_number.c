#include<stdio.h>
int main()
{
    int i,c=0,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    }
    if(c==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}