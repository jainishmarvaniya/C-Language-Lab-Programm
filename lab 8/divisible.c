#include <stdio.h>
void main(){
    int a,b,i;
    printf("enter the value of a and b:");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    i=a+1;
    while(i>a && i<b){
        
            if(i%2==0){
                printf("%d\n",i);
                      }
        
        i=i+1;

                      }
}