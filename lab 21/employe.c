#include<stdio.h>
struct employe{
    int age;
    char name[100];
};
void main(){
int n,i;
printf("enter the number of employees: ");
scanf("%d",&n);
struct employe a[n];
for(i=0;i<n;i++){
    printf("enter a employe detail:%d\n",i+1);
    printf("enter a employe name: ");
    scanf("%s",a[i].name);
    printf("enter a employe age: ");
    scanf("%d",&a[i].age);
}
for(i=0;i<n;i++){
    printf("employe name:%s\n",a[i].name);
    printf("employe age:%d\n",a[i].age);
}
}
