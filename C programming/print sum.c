#include <stdio.h>
int main() {
    int n;
    int sum =0;
    printf("enter ur number"); 
    scanf("%d", &n);
  for(int i=1;i<=n;i++) {
    sum+=i;
  }
  printf("sum is %d" , sum);
return 0;
}