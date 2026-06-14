#include<stdio.h>

int prdt(int a , int b) {
    int prdt=a*b;
    printf("Product is %d ",prdt);
}
int main() {
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    prdt(a,b);
    return 0;
}