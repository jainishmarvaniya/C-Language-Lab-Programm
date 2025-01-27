#include <stdio.h>
#include <math.h>
void main(){
    int i=1,n,m,ans=1;
    printf("enter the number: \n");
    scanf("%d",&n);
    printf("enter the power: ");
    scanf("%d",&m);
    while(i<=m){
        ans*=n;
        i++;
    }
    printf("%d\n",ans);
}