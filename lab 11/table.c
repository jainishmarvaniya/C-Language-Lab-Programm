#include<stdio.h>
void main(){
    int i=1,n;
    printf("enter a multiplication table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}