#include<stdio.h>
void main (){
    int i,j,a[100],size,*p,c;
    printf("enter a size:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter a value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
       c=a[i];
       p=&a[i];
    }
    for(i=0;i<size;i++){
    printf("%d\n",p);
    }
}