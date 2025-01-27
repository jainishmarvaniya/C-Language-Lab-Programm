#include<stdio.h>
void main(){
    int n=101;

    while(100<n && 200>n){
        if(n%7==0 && n%5==0){
            printf("%d\n",n);
        }
        n++;

    }
}