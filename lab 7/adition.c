#include <stdio.h>
void main () {
    int a,b,n,ans;
    printf("1=add 2=sub 3=mul 4=div ");
    printf("enter a number between 1 to 4:");
    scanf("%d",&n);
    printf("enter a two number:");
    scanf("%d %d",&a,&b);
    switch (n)
    {
    case 1:ans=a+b;
        break;
    case 2:ans=a-b;
        break;
    case 3:ans=a*b;
        break;
    case 4:ans=a/b;
        break;
     default:
        break;
    }
    printf("%d",ans);
}