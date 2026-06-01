#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("enter size of array: ");
    scanf("%d" ,&n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++) {
    scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
       printf("%d " , sum);
    
    return 0;
}