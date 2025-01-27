#include<stdio.h>
#include<string.h>
struct car{
    char cname;
    float price;
    char company;
};
void main(){
    struct car a[5];
    int i;
    for(i=0;i<5;i++){
        printf("enter a car detail: %d\n",i+1);
        printf("enter a car name: ");
        scanf("%s",a[i].cname);
        printf("enter a car price: ");
        scanf("%f",&a[i].price);
        printf("enter a car company: ");
        scanf("%s",a[i].company);
    }
}
