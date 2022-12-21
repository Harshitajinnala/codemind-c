#include<stdio.h>
int main()
{
    int u;
    float c,b,s,t;
    scanf("%d",&u);
    if (u<=199)
    {
        c=1.20;
        b=u*1.20;
    }
    else if (u>=200 && u<400)
    {
        c=1.40;
        b=u*1.40;
    }
    else if (u>=400 && u<600)
    {
        c=1.60;
        b=u*1.60;
    }
    else if (u>=600 && u<800)
    {
        c=1.80;
        b=u*1.80;
    }
    else if (u>=800)
    {
        c=2.00;
        b=u*2.00;
    }
    if (b>400)
    {
        s=b*0.15;
    }
    else
    {
        s=0.00;
    }
    t=b+s;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,c,b,s,t);
}




