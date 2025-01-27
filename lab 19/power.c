#include<stdio.h>
int pow(int base,int power);
void main(){
	int base,power;
	printf("enter a base:");
	scanf("%d",&base);
	printf("enter a power:");
	scanf("%d",&power);
	int res=pow(base,power);
	printf("%d",res);
	
}
int pow(int base,int power){
	if(power==1){
		return base;
	}
	else if(power==0){
		return 1;
	}
	else{
		return base*pow(base,power-1);
	}
}
