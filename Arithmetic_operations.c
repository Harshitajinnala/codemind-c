#include<stdio.h>
int main()
{
    int a,b,s,d,p,q,r;
    scanf("%d%d",&a,&b);
    s=(a+b);
    d=(a-b);
    p=(a*b);
    q=(a/b);
    r=(a%b);
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",s,d,p,q,r);
}