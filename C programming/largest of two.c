#include <stdio.h>
int main() {
    int a , b;
    printf("enter first number :"); 
    scanf("%d", &a);
    printf("enter second number : "); 
    scanf("%d", &b);
    if(a>b) {
        printf("a is largest");
    }else {
        printf("b is largest");
    }
return 0;
}