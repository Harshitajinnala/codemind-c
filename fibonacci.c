#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++) //i=2,3,4
	{
		printf("%d ",a); //a=0,1,1,2,3
		c=a+b;  //c=1,2,3,5,8
		a=b;  //a=1,1,2,3,5
		b=c;  //b=1,2,3,5,8
	}
}