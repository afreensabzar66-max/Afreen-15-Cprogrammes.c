#include <stdio.h>
int main() {
    int n;
    printf("enter no of terms :");
    scanf("%d",&n);
    printf("RIGHHT TRIANGLE IS\n");
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}