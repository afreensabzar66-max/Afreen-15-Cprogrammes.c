#include <stdio.h>
int swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a,b;
    printf("Enter first number 'a':");
    scanf("%d",&a);
    printf("Enter second number 'b':");
    scanf("%d",&b);

    printf("Before swap: a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap: a=%d  b=%d", a,b);
    return 0;

}