#include<stdio.h>
void main (){
	int a[5],b[5],w,h,count=0,i,j;
	for(i=0;i<5;i++){
		printf("enter a weight:");
		scanf("%d",&a[i]);
	}
	for(j=0;j<5;j++){
		printf("enter a height:");
		scanf("%d",&b[j]);
}

	for(i=0;i<5;i++){
		if(a[i]<50 && b[i]>170){
			count++;
		}
	}

	printf("%d",count);
}


