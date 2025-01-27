#include<stdio.h>
void main (){
	int i,size,sum=0,count=0;
	printf("enter a size:");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("enter a value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		sum=sum+a[i];
	}
	float avg;
	 avg=sum/size;
	for(i=0;i<size;i++){
		if(a[i]>avg){
			count++;
		}
	}
	printf("%d",count);
}
