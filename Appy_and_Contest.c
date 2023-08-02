#include<stdio.h>
int main()
{
    int n,a,b,c,d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int x=(a/b)+(a/c);
        if (x>=d)
        {
            printf("Win");
        }
        else
        {
            printf("Lose");
        }
    printf("
");
    }
}