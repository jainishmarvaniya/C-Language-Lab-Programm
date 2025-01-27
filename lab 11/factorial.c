#include <stdio.h>
void main (){
 int i=1,n,m=1;
    printf("enter a n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      m=m*i;
    }
    printf("%d",m);
}