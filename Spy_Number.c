#include<stdio.h>
int main()
{
    int d,n,s=0,p=1,i;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
        
    }
    if(s==p)
    {
    printf("Spy Number");
}
else
{
    printf("Not Spy Number");
}
}