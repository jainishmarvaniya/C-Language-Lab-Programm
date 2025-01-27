#include<stdio.h>
void main () {
    int a,b,c,lar;
    printf("enter the a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    lar=a>b?(a>c ? a:c):(b>c ? b:c);
    printf("%d",lar);
}