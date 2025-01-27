#include<stdio.h>
struct student{
    char sname[100];
    int age;
    float percentage;
};
void main(){
    int i,n;
    printf("enter the number of student detail: ");
    scanf("%d",&n);
    struct student a[n];
    for(i=0;i<n;i++){
    printf("enter a student detail:%d\n",i+1);
    printf("enter a student name: ");
    scanf("%s",a[i].sname);
    printf("enter a student age ");
    scanf("%d",&a[i].age);
    printf("enter a student percentage:");
    scanf("%f",&a[i].percentage);
}
for(i=0;i<n;i++){
    printf("student name:%s\n",a[i].sname);
    printf("student age:%d\n",a[i].age);
    printf("student percentage:%f\n",a[i].percentage);
}
}