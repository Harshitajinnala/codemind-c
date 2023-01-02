#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float avg,a[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    printf("%0.2f",avg);
    
}