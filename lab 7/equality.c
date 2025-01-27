#include<stdio.h>
void main(){
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    a^b?printf("not equality"):printf("equality");
}