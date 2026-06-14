#include<stdio.h>
int swap(int a , int b) {
int temp=a;
a=b;
b=temp;
printf("After swapping\n");
printf("a=%d, b=%d\n",a,b);
}
int main() {
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
 
    printf("Before swapping\n");
    printf("a=%d, b=%d\n",a,b);
    swap(a,b);
    
    return 0;
}
