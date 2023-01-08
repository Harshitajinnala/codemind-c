#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=s+sqrt(i);
    }
    printf("%.2f",s);
}