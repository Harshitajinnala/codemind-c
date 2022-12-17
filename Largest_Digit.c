#include<stdio.h>
int main()
{
	int n,temp=0,r;
	scanf("%d",&n);
	while(n>0)
	{
	    r=n%10;
	    if(temp<r)
	    temp=r;
	    n=n/10;
	}
	printf("%d",temp);
	}