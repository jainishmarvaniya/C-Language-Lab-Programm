#include <stdio.h>
void main(){
    int i=0,a,odd=0,even=0;
    while(i<10){
        printf("Enter Numbers");
        scanf("%d",&a);
        if(a%2!=0){
            odd++;
        }
        if(a%2==0){
            even++;
        }
        i++;
        
    }
    printf(" %d %d\n",odd,even);
}
    
    