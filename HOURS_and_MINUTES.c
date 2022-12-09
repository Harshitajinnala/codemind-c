#include<stdio.h>
#include<math.h>
int main()
{
    int a,h,m;
    scanf("%d",&a);
    h=a/60;
    m=a%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}