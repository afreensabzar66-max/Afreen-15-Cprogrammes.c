#include <stdio.h>
int main() {
    int a ,b ,temp;
    printf("enter a : ");
    scanf("%d" , &a);
    printf("enter b :");
    scanf("%d" , &b);
    temp=a;
    a=b;
    b=temp;
   printf("After swaping , a = %d , b = %d" , a,b);
       return 0;
}