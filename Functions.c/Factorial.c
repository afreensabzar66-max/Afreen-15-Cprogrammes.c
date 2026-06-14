#include<stdio.h>

int fact(int n) {
    int fact=1;
    for(int i=1;i<=n;i++) {
        fact*=i;
    }
    printf("factorial is %d",fact);
}
int main() {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    
    fact(n);
    return 0;
}