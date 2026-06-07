#include<stdio.h>
int main() {
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int digitSum =0;
    while(n>0) {
        int lastDigit=n%10;
         n=n/10;
        digitSum+=lastDigit;
    
    }
    printf("sum of digits is %d",digitSum);
    return 0;
}
                      