#include<stdio.h>
void main(){
int n=5,i,j;
for( i=1;i<=n;i++){
    
    for( j=1;j<=n;j++){
      int t=(n/2)+1;
      
      if(i==1 || i==n || j==1 || j==t){
      printf(" * ");

    }
    else
      printf("  ");
  
    }
    printf("\n");
}
}
