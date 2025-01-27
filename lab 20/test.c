#include<stdio.h>
struct student{
 int rollno;
 char sname[100];
 float per;
};

void main(){
    int i,n;
    
    printf("enter a  number of student detail:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("enter a student detail:%d\n",i+1);
        printf("enter a student name:");
        scanf("%s",s[i].sname);
        printf("enter a student rollno:");
        scanf("%d",&s[i].rollno);
        printf("enter a student persentage:");
        scanf("%f",&s[i].per);
     } 
     for(i=0;i<n;i++){
        printf("student name:%s\n",s[i].sname);
         printf("student rollno:%d\n",s[i].rollno);
         printf("student persentage:%f\n",s[i].per);
                     }
      for(i=0;i<n;i++){
      if(s[i].per>=50.00){
        printf("student name:%s\n",s[i].sname);
        printf("student rollno:%d\n",s[i].rollno);
      }
      }


}