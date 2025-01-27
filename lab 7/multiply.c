#include<stdio.h>
void main(){
    int a,b,c,lar,lc;
    printf("enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    lar=(a>b)?a:b;
    lc=lar*c;
    printf("%d",lc);
    }
