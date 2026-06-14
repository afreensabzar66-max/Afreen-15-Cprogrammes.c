#include<stdio.h>
int max(int a,int b) {
    if(a>b) {
        printf("a=%d is largest",a);
    }else{
        printf("b =%d is largest",b);
    }
}
int main() {
    int a,b;
    printf("Enter first number 'a':");
    scanf("%d",&a);
    printf("Enter second number 'b':");
    scanf("%d",&b);
    max(a,b);
    return 0;

}

