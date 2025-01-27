#include<stdio.h>
void main(){
    int i=0,j=0,a[100],size,temp=0;
    printf("enter a size:");
   scanf("%d",&size);
   for(i=0;i<size;i++){
    printf("enter a value:");
    scanf("%d",&a[i]);
   }
    for(i=0,j=size-1;i<size/2;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<size;i++){
    printf(" %d ",a[i]);
}
}