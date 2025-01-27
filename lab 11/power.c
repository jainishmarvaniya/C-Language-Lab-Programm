#include<stdio.h>
void main()
{
    int a,b,sum=1;
    printf("enter the a,b:");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
    sum=sum*a;
    
    }
    printf("%d\n",sum);
}