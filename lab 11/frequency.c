#include<stdio.h>

int main()
{
    int n,digit,r,count=0;
    printf("enter the number");
    scanf("%d",&n);
    
    printf("enter the digit :");
    scanf("%d",&digit);
    
    while (n!=0){
         r=n%10;
        if(r==digit){
         
         count++;
         }
        
        n=n/10;
    }
    printf(" frequency of %d is %d",digit,count);
    
    return 0;
}