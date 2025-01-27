#include<stdio.h>
void main(){
int n=6,i,j;
char ch='A';
for(i=1;i<=5;i++){

    for( j=1;j<=i;j++){
        if(i%2==0){
            printf(" %c ",ch);
            ch++;
        }
        else{
            printf(" %d ",j);
        }

    }
    printf("\n");
}
}
