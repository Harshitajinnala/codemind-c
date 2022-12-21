#include<stdio.h>
int main()
{
    int a,b,c,a1,a2,a3;
    scanf("%d%d%d",&a,&b,&c);
    a1=a+b;
    a2=b+c;
    a3=a+c;
    if(a1>a2 && a1>a3)
    {
        printf("%d",a1);
    }
    else if (a2>a1 && a2>a3)
    {
        printf("%d",a2);
    }
    else if (a3>a1 && a3>a2)
    {
        printf("%d",a3);
    }
}

