#include<stdio.h>
int main()
{
    int c=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
    {
    if(n%i==0)
    c++;
    
    }
    if(c==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}