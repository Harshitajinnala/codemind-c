#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c;
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(!(a[i]>=b && a[i]<=c))
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}
