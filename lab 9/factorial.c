#include<stdio.h>
void main(){
    int i=1,n,m=1;
    printf("enter the number: ");
    scanf("%d",&n);
    while(i<=n){
        m=m*i;
        i++;
    }
    printf("%d\n",m);

}