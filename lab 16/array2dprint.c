#include<stdio.h>
void main (){
    int i,j,row,col;
    printf("Enter a row value: ");
    scanf("%d",&row);
    printf("Enter a Col value: ");
    scanf("%d",&col);
    int a[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter a value:");
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d ",a[i][j]);

        }
            printf("\n");
        }
        }


