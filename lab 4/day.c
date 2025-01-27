#include <stdio.h>
void main (){
    int d,w,y;
    printf("enter a value of d");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
    printf("year=%d\n",y);
    printf("week=%d\n",w);
    printf("day=%d\n",d);
}