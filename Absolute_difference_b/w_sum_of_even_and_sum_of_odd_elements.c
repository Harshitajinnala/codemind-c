#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[n],s1=0,s2=0,d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 || a[i]==0)
        {
            s1=s1+a[i];
        }
        else if(a[i]%2==1)
        {
            s2=s2+a[i];
        }
        d=abs(s2-s1);
    }
    printf("%d",d);
}
