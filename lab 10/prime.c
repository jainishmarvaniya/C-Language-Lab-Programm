#include<stdio.h>
void main()
{
    int n,i=1,c;

    printf("enter the value of number => ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%1==0)
        {
            c=c+1;
        }
        i++;
    }
    (c==2)?(printf("PRIME")):(printf("not prime"));
}