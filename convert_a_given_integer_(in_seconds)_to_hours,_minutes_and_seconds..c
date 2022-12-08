#include<stdio.h>
int main()
{
    int a,h,m,s;
    scanf("%d",&a);
    h=a/3600;
    m=(a-(3600*h))/60;
    s=(a-(3600*h)-(m*60));
    printf("H:M:S-%d:%d:%d",h,m,s);
}
