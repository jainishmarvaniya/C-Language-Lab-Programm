#include<stdio.h>
void main(){
   int arr[100],size,i;
   printf("enter a size:");
   scanf("%d",&size);
   for(i=0;i<size;i++){
    printf("enter a value:");
    scanf("%d",&arr[i]);
   }
   int *p;
   p=arr;
   for(int i=0;i<size;i++){
    printf("%d",*p);
    p++;
    printf("\n");
   }
}