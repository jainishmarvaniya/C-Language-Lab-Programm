#include<stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("enter a n:");
    scanf("%d",&n);
    for(i=1;i<=n;)
    {
        printf("%d",i);
        i=i+3;
        sum=sum+i;
    }
    printf("%d",sum);
}