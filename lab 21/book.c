#include<stdio.h>
struct book{
    char title[100];
    char author[100];
    char pub[100];
    float price;
};
void main(){
    struct book b[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter a book detail:%d\n",i+1);
        printf("enter a book title: ");
        scanf("%s",b[i].title);
        printf("enter a book author: ");
        scanf(" %s",b[i].author);
        printf("enter a book  price: ");
        scanf("%f",&b[i].price);
    }
    for(i=0;i<3;i++){
        printf("book title:%s\n",b[i].title);
        printf("book author:%s\n",b[i].author);
        printf("book price:%f\n",b[i].price);
    }
}