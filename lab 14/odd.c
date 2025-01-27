#include<stdio.h>
void main(){
    int a[100],counte=0,counto=0,i,size;
    printf("enter a size:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("enter a array:");
        scanf("%d",&a[i]);
    
    if(a[i]%2==0){
        counte++;
    }
    else{
        counto++;
    }
    }
    printf(" even number count: %d\n odd number count: %d ",counte,counto);
}

