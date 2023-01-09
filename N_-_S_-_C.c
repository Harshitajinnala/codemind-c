#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d",&a,&b);
    for(n=a+1;n<b;n++)
    {
        printf("%d %d %d
",n,n*n,n*n*n);
    }
}