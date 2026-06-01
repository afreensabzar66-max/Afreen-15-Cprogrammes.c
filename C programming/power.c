#include <stdio.h>
#include <math.h>
int main() {
 int a,b;
 float result;
 printf("enter the number :");
 scanf("%d" , &a);
 printf("enter the power :");
 scanf("%d" , &b);
 for(int i=1;i<=b;i++) {
    result=pow(a,i);
    printf("%f\n", result);
 }
 return 0;
}