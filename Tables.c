#include<stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i+=2) 
	{
	    c=a*i;
		printf("%d x %d = %d
",a,i,c); 
	}
}