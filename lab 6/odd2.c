#include<stdio.h>
void main () {
    int n,lastdigit;
    printf("enter a number:");
    scanf("%d",&n);
    lastdigit=n%10;
    if(lastdigit%2==0)
    {
        printf("even number:");
    }
    else if(lastdigit%2!=0)
    {
        printf("odd number:");
    }
    else
    {
        printf("number is 0:");
    }
}