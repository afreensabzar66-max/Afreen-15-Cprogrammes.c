#include<stdio.h>
int main() {
    int n=10;
    int count =0;
for(int i=2;i<=n-1;i++) {
    if(n%i!=0) {
    count++;
}
printf("%d ", count);
}
    return 0;
}
