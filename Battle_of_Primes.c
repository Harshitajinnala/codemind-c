#include<stdio.h>
int main()
{
    int a,b,c,i,j,d,co;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(i=1;i<=a*b;i++) 
    {
        co=0;
        for(j=1;j<=d;j++)
        {
            if((c+i)%j==0)
            {
                co++;
            }
        }
        if(co==2)
        {
            printf("%d",i);
            break;
        }
    }
}