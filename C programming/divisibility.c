#include <stdio.h>
int main() {
    int n;
    printf("enter ur number"); 
    scanf("%d", &n);
    if(n%5==0) {
        printf("numb is divisible by 5");
    }else{
   printf("numb is not divisible by 5");
    }
return 0;
}