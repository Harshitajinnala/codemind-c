#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float c;
    c=(a+b)*0.5;
    printf("Average of %d and %d is: %0.2f",a,b,c);
}