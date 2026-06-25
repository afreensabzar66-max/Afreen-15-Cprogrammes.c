#include <stdio.h>

int main() {
    int a, b;


    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);

    //calculations
    printf("Sum is: %d\n", a + b);
    printf("Difference is: %d\n", a - b);
    printf("Product is: %d\n", a * b);

    if (b != 0) {
        printf("Quotient is: %f", (float)a / b);
    } else {
        printf("Quotient is: Undefined (division by zero)\n");
    }

    return 0;
}