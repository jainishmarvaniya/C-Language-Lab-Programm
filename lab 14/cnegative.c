#include<stdio.h>
void main(){
    int a[100],countp=0,countn=0,i,size;
    printf("enter a size:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter a array:");
        scanf("%d",&a[i]);
    
    if(a[i]>=0){
        countp++;
    }
    else{
        countn++;
    }
    }
    printf(" positive number count: %d\n negative number count: %d ",countp,countn);
}
