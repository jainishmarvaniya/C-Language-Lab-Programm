#include<stdio.h>
void main (){
    int pr=0,cu=1,i=0,nex,n;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<n)
    {
        printf(" gg%d ",cu);
        nex=pr+cu;
        pr=cu;
        cu=nex;
       i++;
    }
}