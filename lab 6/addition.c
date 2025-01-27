#include <stdio.h>
void main () {
    int a,b,c,x;
    printf("1=add 2=sub 3=mul 4=div");
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    scanf("%d",&x);
    if(x==1)
    {
        c=a+b;
    }
    else if(x==2)
    {
        c=a-b;
    }
    else if(x==3)
    {
        c=a*b;
    }
    else if(x==4)
    {
        c=a/b;
    }
    printf("%d",c);
    }
    
    
