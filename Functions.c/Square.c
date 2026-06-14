#include<stdio.h>
int square(int n) {
     int square=n*n;
     return square;
}
int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    square(n);
    printf("square of %d is %d",n , square(n));
    return 0;
}