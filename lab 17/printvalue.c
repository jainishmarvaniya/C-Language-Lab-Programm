#include<stdio.h>
void main (){
    int a,*p;
    printf("enter a a:");
    scanf("%d",&a);
    p=&a;
    printf("%d %d %d",a,p,*p);
}