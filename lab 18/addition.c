#include<stdio.h>
int add(int,int);
void main (){
    int a,b,z;
    printf("enter integer:");
    scanf("%d",&a);
    printf("enter integer:");
    scanf("%d",&b);
    int res=add(a,b);
    printf("%d",res);

}
int add(int a,int b){
  int z=a+b;
  return z;
}