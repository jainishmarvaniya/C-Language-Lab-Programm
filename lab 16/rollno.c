#include<stdio.h>
void main()

{ 
    int a[20][2],i,j;
    for(i=0;i<20;i++)
    {
        for(j=0;j<2;j++)
        {   
            printf("enter a roll no and marks");
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<20;i++)
    {
        for(j=0;j<2;j++)
        {   
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}    