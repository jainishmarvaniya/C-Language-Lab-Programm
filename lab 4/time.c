#include <stdio.h>
void main (){
    int t,m,s,h;
    printf("enter a value of s");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    s=(s%3600)%60;
    printf("%d %d %d",h,m,s);
}

    