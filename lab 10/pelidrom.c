#include<stdio.h>
void main (){
    int i,n,rem,r=0;
    printf("enter a n:");
    scanf("%d",&n);
    i=n;
    while(n!=0){
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    printf("%d\n",r);
    if(r==i)
    {
        printf("pelidrom number:");
    }
    else{
        printf("not pelidrom number:");
    }
}