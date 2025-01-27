#include<stdio.h>
void main() {
    int u;
    float tb,bill;
    printf("enter a total conspition unit:");
    scanf("%d",&u);
    if(u<=50)
    {
        bill=u*.50;
    }
    else if(u<=150)
    {
        bill=25+((u-50)*0.75);
    }
    else if(u<=250)
    {
        bill=25+75+((u-150)*1.20);
    }
    else
    {
        bill=25+75+120+((u-250)*1.50);
    }

        tb=bill+(bill*0.20);

        printf("%f",tb);
}