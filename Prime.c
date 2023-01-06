#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;int count=0;
    while(t!=0){
        if(n%t==0){
            count++;
        }
        t--;
    }
    if(count>2){
        printf("Not Prime");
    }
    else{
        printf("Prime");
}
}