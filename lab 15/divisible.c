#include<stdio.h>
void main (){
    int i,size,a[100],count;
   printf("enter a size:");
   scanf("%d",&size);
   for(i=0;i<size;i++){
    printf("enter a value:");
    scanf("%d",&a[i]);
   }
   for(i=0;i<size;i++){
    if(a[i]%3==0){
        count++;
    }
   }
   printf("count=%d",count);
}