#include <stdio.h>
int main() {
int temp;

// int arr[]={1, 5 ,9};

int n;

printf("enter size of array:");
scanf("%d" , &n);
int arr[n];
printf("enter elements of array:");
for (int i=0;i<n;i++){
scanf("%d" , &arr[i]);
}
int start=0, end=n-1;
  while(start<=end) {
    temp=arr[start];
    arr[start] =arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
    for(int i=0;i<n;i++) {
    printf(" %d ",arr[i]);
    }
   
return 0;
}