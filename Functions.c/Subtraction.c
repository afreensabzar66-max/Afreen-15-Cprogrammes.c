#include<stdio.h>

int subt(int a , int b) {
    int subt=a-b;
    printf("Difference is %d",subt);
}
int main() {
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    subt(a,b);
    return 0;
}