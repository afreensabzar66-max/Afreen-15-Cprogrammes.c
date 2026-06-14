#include<stdio.h>

int palin(int n) {
    int reverse=0;
    int original=n;
    while(n>0) {
        int lastDigit=n%10;
        reverse=(reverse*10)+(lastDigit);
        n=n/10;
    }
    if(reverse==original) {
        printf("Number is palindrome");
    } else {
        printf("Number is not palindrome");
    }
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    palin(n);
    return 0;
}