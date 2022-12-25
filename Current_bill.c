#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if (a<=199)
    {
        a=a*1.20;
    }
    else if(a>=200&&a<400)
    {
        a=a*1.50;
    }
    else if (a>=400&&a<600)
    {
        a=a*1.80;
    }
    else
    {
        a=a*2.00;
    }
    if(a<=400)
    {
        a=a+100;
    }
    else 
    {
        a=a+(15*a/100);
    }
    printf("%0.2f",a);
}