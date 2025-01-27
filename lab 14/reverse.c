#include<stdio.h>
void main(){
 int i,a[100],size;
 printf("enter a size:");
 scanf("%d",&size);
 for(i=0;i<size;i++){
 	printf("enter a array:");
 	scanf("%d",&a[i]);
 }
 for(i=0;i<size;i++){
 	printf("%d ",a[i]);
 }
 for(i=size-1;i>=0;i--){
 	printf(" %d",a[i]);
 }
}
 
   
