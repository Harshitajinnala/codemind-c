#include<stdio.h>
int main()
{
    int n,b,c,k=0,i=0,m,a;
    scanf("%d",&n);
    m=n;
    a=n;
    for(a=m;a>0;a=a/10)
   {
       i++;
       b=a%10;
       for(n=m;n>0;n=n/10)
       {
           c=n%10;
           if(b==c)
           {
               k++;
           }
       }
   } 
   if(k==i)
   {
       printf("Unique Number");
   }
   else
   {
       printf("Not Unique Number");
   }
}