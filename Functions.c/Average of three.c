#include <stdio.h>
float avg(int a, int b,int c) {
    float average= (a+b+c)/3.0;
    return average;
}
int main() {
    int a,b,c;
    printf("Enter first num'a':");
    scanf("%d", &a);

    printf("Enter second num'b':");
    scanf("%d", &b);

    printf("Enter second num'c':");
    scanf("%d", &c);
    avg(a,b,c);
    printf("avg is %.2f",avg(a,b,c));
    return 0;
}