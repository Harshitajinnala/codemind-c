#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,pf,g;
    scanf("%f%f%f",&a,&b,&c);
    pf=(a*12)/100;
    g=a+b+c+pf;
    printf("%0.2f
%0.2f",pf,g);
}