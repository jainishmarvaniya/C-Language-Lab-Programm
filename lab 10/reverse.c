#include<stdio.h>
void main (){
    int i=1,n,r=0,rem=0;
  printf("enter a n:");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    r=r*10+rem;
    n=n/10;
  }
  printf("%d",r);
}