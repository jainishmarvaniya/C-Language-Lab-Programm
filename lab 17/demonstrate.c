#include"stdio.h"
void main()//error
{
    int *a;
    float *b;
    double *c;
    char *d;
    int t;
    float k;
    double l;
    char j; 
    t=10;
    k=10;
    l=10;
    j=10;
    a=&t;
    b=&k;
    c=&l;
    d=&j;   
    printf("%d %d",a,*a);
    printf("%d %d",b,*b);
    printf("%d %d",c,*c);
    printf("%d %d",d,*d);
}