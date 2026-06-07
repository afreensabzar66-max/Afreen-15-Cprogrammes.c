#include<stdio.h>

int main() {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++) {
        if(n%i!=0) {
            printf("the number is prime") ;
            return 0;
        }else{
            printf("the number is not prime");
            return 0;
        }  
    }
    return 0;
}