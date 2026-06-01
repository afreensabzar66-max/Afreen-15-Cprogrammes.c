#include <stdio.h>

int main() {
    int n;
    int next , a=0, b=1;
    printf("enter no of terms"); 
    scanf("%d", &n);
    if(n==0) {
        printf("0");
        return 0;
    }
    for(int i=1;i<=n;i++) {
      next = a +b;
      a=b;
      b=next;
    
    printf("%d ", b);
    }
    return 0;
}