#include <stdio.h>
void main () {
    int a,b,c;
    printf("enter the triangle sides:");
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
    {
    printf("right angle");
    }
    else if(a==b && b==c)
    {
    printf("equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("isosceles triangle");
    }
    else 
    {
        printf("scalen triangle");
    }
}