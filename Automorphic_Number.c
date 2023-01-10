#include<stdio.h>
int main()
{
    int n,i,j,sq,c1=0,c2=0;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        i=n%10;
        c1++;
        n=n/10;
    }
    while(sq>0)
    {
        j=sq%10;
        c2++;
        sq=sq/10;
        if(c1==c2)
        {
            break;
        }
    }
    if(i==j)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}
