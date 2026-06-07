#include<stdio.h>

int main() {
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    int reverse=0;
    while(n>0) {
        int lastDigit=n%10;
        reverse=(reverse*10)+(lastDigit);
        n=n/10;
    }
    printf("Reverse is %d " , reverse);
    return 0;
}