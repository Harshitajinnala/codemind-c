#include<stdio.h>
int  main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=b*30;
    if (c<=a)
    {
        printf("YES");
    }
    else if (c>a)
    {
        printf("NO");
    }
}
