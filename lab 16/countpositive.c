#include<stdio.h>
void main (){
    int i,j,countp=0,countn=0,countz=0,a[3][3];
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("enter a value:");
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>0){
                countp++;
            }
            else if(a[i][j]<0){
                countn++;
            }
            else{
                countz++;
            }
        }
    }
    printf("count positive: %d\n count negative: %d\n count zero: %d",countp,countn,countz);
}
