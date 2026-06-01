#include <stdio.h>
int main() {
    int n;
    printf("enter no of terms :");
    scanf("%d",&n);
    printf("Right Triangle 2 :\n ");
    for(int i=1;i<=n;i++) {
        for(int k=0;k<=n-i-1;k++) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("*");
        
    }
        printf("\n");
    }
    return 0;
}