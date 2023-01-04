#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],avg,s=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(s/n==i)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}