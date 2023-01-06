#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d%d",&n,&sum);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum=sum+i;
    }
    }
  printf("%d",sum);
}