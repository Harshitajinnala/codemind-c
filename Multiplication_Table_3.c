#include <stdio.h>
int main() {
  int n1,i,n2,n3;
  scanf("%d%d%d",&n1,&n2,&n3);
  for (i=n2;i<=n3;i++) {
    printf("%d x %d = %d
",n1,i,n1*i);
  }
  return 0;
}