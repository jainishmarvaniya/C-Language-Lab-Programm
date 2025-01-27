#include<stdio.h>
void main(){
    int i,j,row,col;
    int *p[row],*q[row],add[row][col];
    printf("Enter a row value: ");
    scanf("%d",&row);
    printf("Enter a Col value: ");
    scanf("%d",&col);
    int a[row][col],b[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter a value:");
            scanf("%d",&a[i][j]);
        }
        p[i]==(a+i);
    }
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter a value:");
            scanf("%d",&b[i][j]);
        }
        q[i]==(b+i);
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            
            printf("%d ",(*(p[i]+j))+(*(q[i]+j)));
        }
        printf("\n");
    }
}