#include<stdio.h>
int fac(int);
void main(){
  int n;
  printf("enter a n:");
  scanf("%d",&n);
  int res=fac(n);
  printf("factorial of n:%d",res);
}
int fac(int n){
if(n==0)
	return 1;

else if(n==1)
	return 1;

else
	return n*fac(n-1);
}
