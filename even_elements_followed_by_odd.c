#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n-1;
    int ar[t];
    int  i=0;
    while(i<=t)
    {
        scanf("%d",&ar[i]);
        i++;
    }
    i=0;
    while(i<=t)
    {
        if(ar[i]%2==0)
        {
            printf("%d ",ar[i]);
        }
    i++;
    }
     i=0;
    while(i<=t)
    {
        if(ar[i]%2!=0)
        {
            printf("%d ",ar[i]);
        }
    i++;
    }
    
    
}