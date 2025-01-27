#include<stdio.h>
void main (){
    int a,b,c;
    printf("enter value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("largest number a:");
    else if(b>a && b>c)
    printf("largest number b:");
    else
    printf("largest number c:");
}