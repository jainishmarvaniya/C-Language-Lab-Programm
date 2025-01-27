#include<stdio.h>
void print(int arr[]);
int size;
void main(){
   int i, arr[100];
  printf("enter a size: ");
  scanf("%d",&size);
  for(i=0;i<size;i++){
    printf("enter a element %d\n",i+1);
    scanf("%d",&arr[i]);
  }
  print(arr);
}


void print(int a[]){
    int i;
       for(i=0;i<size;i++){
    printf(" %d ",a[i]);
   }
}
 