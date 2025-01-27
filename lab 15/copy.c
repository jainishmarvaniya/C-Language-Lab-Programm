#include<stdio.h>
void main(){
    int a[100],b[100],i,size,value;
    printf("enter a size:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter a value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        printf("array a:%d\n",a[i]);
    }
    for(i=0;i<size;i++){
        b[i]=a[i];
    }
    for(i=0;i<size;i++){
        printf("array b:%d\n",b[i]);
    }
}