#include<stdio.h>
void main (){
    int a,b,*p,*c,x;
    printf("enter a a:");
    scanf("%d",&a);
    printf("enter a b:");
    scanf("%d",&b);
    c=&a;
    p=&b;
    printf("a address:%d\n a value:%d\n b address:%d\n b value:%d\n",c,*c,p,*p);
    x=*p+*c;
    printf("sum of a and b:%d",x);
}