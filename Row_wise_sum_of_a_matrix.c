#include<stdio.h>
int main()
{
  int n,m,i,j,s=0;
  scanf("%d%d",&n,&m);
  int a[n][m],b[n][m],c[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}  
	}
	for(i=0;i<n;i++)
	{
	    int s=0;
	    	for(j=0;j<m;j++)
		{
			
			s=s+a[i][j];
		}  
		printf("%d ",s);
	}
}