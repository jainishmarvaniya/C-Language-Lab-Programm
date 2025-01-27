#include<stdio.h>
void main () {
    int a,b,c,root1,root2,de;
    printf("enter the value of a,b,c in form of ax^2+bx+c:");
    scanf("%d %d %d",&a,&b,&c);

    de=b*b-4*a*c;
    if(de>0)
    {
        root1=((-b+de)/2*a);
        root2=((-b-de)/2*a);
        printf("%d %d",root1,root2);
    }
    else if(de==0)
    {
        root1=((-b)/2*a);
        printf("%d",root1);
    }
    else
    {
        printf("roots are not imagin");
    }
}