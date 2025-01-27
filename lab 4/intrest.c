#include <stdio.h>
void main (){
    int i,p,r,tp;
    printf("enter a value of p,r,tp");
    scanf("%d %d %d",&p,&r,&tp);
    for(i=1;i<=tp;i++);
    i=(p*r*tp)/100;
    printf("simple intrest %d",i);
}