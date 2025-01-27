#include<stdio.h>
void main ()
{
    int fd,ld,n,sum;

    printf("enter the value of number");
    scanf("%d",&n);

    if(n<9)
    {
        printf("sum= %d",n);

    }
    else{
    ld=n%10;        
    while(n>9)
    {
       n=n/10;
    }
    fd=n;


}

sum=fd+ld;
printf("sum= %d",sum);
}