#include<stdio.h>
int main()
{
    int a[20];
    int i,m;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
        m=a[i]*a[i];
        if(m==1)
        {
            break;
        }
        else if(m!=1)
        {
            printf("%d
",m);
        }
    }
}