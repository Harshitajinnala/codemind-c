#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i,cn=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		c=a+b;
		if(c==n)
		{
		    cn++;
		    break;
		}
		a=b; 
		b=c;  
	}
	if(c==n)
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
}