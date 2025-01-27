#include<stdio.h>
void main (){
    int a,b,c;
    printf("enter a number of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a>c || a<c && a>b)
    {
        printf("second largest number is%d",a);
    }
    else if(b<a && b>c || b<c && b>a)
    {
        printf("second largest number is %d",b);
    }
    else
    {
        printf("second largest number%d",c);
    }
}
