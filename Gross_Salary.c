#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    float d,h;
    if(b<=10000)
    {
        d=(b*0.8);
        h=(b*0.2);
    }
    else if(b<=20000)
    {
        d=(b*0.9);
        h=(b*0.25);
    }
    else
    {
        d=(b*0.95);
        h=(b*0.30);
    }
    float g;
    g=b+h+d;
    printf("%0.2f",g);
}