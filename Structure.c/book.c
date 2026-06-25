#include<stdio.h>
#include<string.h>

struct Book {
    char title[40];
    char author[20];
    float price;
};
int main() {
     char title[40];
    char author[20];
    float price; 
    struct Book B[3];
    struct Book B1={"The Devine Reality" , "Hamza Andrease" , 300};
    struct Book B2={" MTG" , "Hamza" , 260.65};
    struct Book B3={"Pyq" , "amna" , 500};
   printf("enter book name : ");
   scanf("%s", title);
   
//    for(int i=1;i<=3;i++) {
   if (strcmp(title ,B1.title )==0) {
    printf("author : %s\n price = %2f" , B1.author , B1.price);
   }else if (strcmp(title ,B2.title )==0) {
    printf("author : %s\n price = %2f" , B2.author , B2.price);
   }else if (strcmp(title ,B3.title )==0) {
    printf("author : %s\n price = %2f" , B3.author , B3.price);
   }else{
    printf("book not found");
   }

    return 0;
}

