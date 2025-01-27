#include<stdio.h>
void main(){
  int i,n=5,j,m=1;
  for(i=1;i<=4;i++){
    for(j=1;j<=i;j++){
        printf(" %d ",m);
        m++;   
    }
    printf("\n");
  }
}
