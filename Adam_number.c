#include<stdio.h>
int main()
{
    int a,b,c,rev1=0,rev2=0,rem1,rem2,temp1,temp2;
    scanf("%d",&a);
    temp1=a*a;
    while(a>0)
    {
        rem1=a%10;
        rev1=rev1*10+rem1;
        a=a/10;
    }
    b=rev1*rev1;
    while(b>0)
    {
        rem2=b%10;
        rev2=rev2*10+rem2;
        b=b/10;
    }
    if(temp1==rev2)
    printf("True");
    else
    printf("False");
}