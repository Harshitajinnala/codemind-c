#include<stdio.h>
int main()
{
    int n,a[n],i,m=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(m<a[i])
        {
            m=a[i];
        }
    }
    printf("%d",m);
}