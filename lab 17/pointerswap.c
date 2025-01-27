#include<stdio.h>
void main (){
    int a,b,temp,*c,*p;
    printf("enter a a:");
    scanf("%d",&a);
    printf("enter a b:");
    scanf("%d",&b);
    p=&a;
    c=&b;
    temp=*p;
    *p=*c;
    *c=temp;
    printf("swap of a:%d swap of b:%d",*p,*c);
}