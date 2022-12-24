#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b*1+(c*2))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}