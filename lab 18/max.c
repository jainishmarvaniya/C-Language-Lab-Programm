#include<stdio.h>
int max(int,int);
int min(int,int);
void main (){
    int a,b;
    printf("enter a integer:");
    scanf("%d",&a);
    printf("enter a integer:");
    scanf("%d",&b);
    int maxvalue=max(a,b);
    printf("max value:%d\n",maxvalue);
    int minvalue=min(a,b);
    printf("min value:%d",minvalue);
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}    
