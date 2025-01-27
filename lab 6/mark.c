#include<stdio.h>
void main () {
    int s1,s2,s3,s4,s5,tm;
    float pr;
    printf("enter a marks:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    tm=s1+s2+s3+s4+s5;
    pr=tm/5;
    if(pr<35)
    {
      printf("fail");
    }
    else if(pr<=45)
    {
       printf("pass class");
    }
    else if(pr<=60)
    {
        printf("second class");
    }
    else 
    {
        printf("distrinction");
    }
}