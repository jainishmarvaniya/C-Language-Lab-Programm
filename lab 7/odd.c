#include <stdio.h>
void main () {
    int a,b;
    printf("enter a numer a and b:");
    scanf("%d %d",&a,&b);
    a%2==0?printf("a is even"):printf(" a is odd");
    b%2==0?printf(" b is even"):printf(" b is odd");
}