#include<stdio.h>
void main (){
	int i,a[100],n,sum=0,max,min;
	float avg;
	printf("enter a size:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter a array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
	if(max<a[i]);{
	     max=a[i];
	}
	if(min>a[i]){
		min=a[i];
	}
}
	avg=sum/(float)n;
	printf("sum %d\n",sum);
	printf("avg %f\n",avg);
	printf("min %d\n",min);
	printf("max %d\n",max);
}
