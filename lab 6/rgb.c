#include<stdio.h>
void main (){
    int r,g,b;
    float w,c,m,y;
    printf("enter a value of r,g,b:");
    scanf("%d %d %d",&r,&g,&b);
    w=(r/255.0,g/255.0,b/255.0);
    c=(w-r/255.0)/w;
    m=(w - g/255.0)/w;
    y=(w - b/255.0)/w;
    b=1 - w;
    if(r==0 && g==0 && b==0)
    {
        c=0.0;
        m=0.0;
        y=0.0;
        b=1.0;
        c=0.0;
        w=0.0;
    }
    printf("%f %f %f %f %f %f",c,m,y,b,c,w);
}