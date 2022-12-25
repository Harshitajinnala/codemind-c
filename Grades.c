#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
    a=(f+b+c+d+e)/5;
    if(a>=90)
    {
        printf("Grade A");
    }
    else if(a>=80)
    {
        printf("Grade B");
    }
    else if(a>=70)
    {
        printf("Grade C");
    }
    else if (a>=60)
    {
        printf("Grade D");
    }
    else if (a>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}