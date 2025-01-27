#include<stdio.h>
void main () {
    float sal,hra,da;
    printf("enter a salery:");
    scanf("%f",&sal);
    if(sal>=10000)
    {
        sal=(sal)+(0.20*sal)+(0.80*sal);
    }
    else if(sal>=20000)
    {
        sal=(sal)+(0.25*sal)+(0.90*sal);
    }
    else if(sal>=30000)
    {
        sal=(sal)+(0.30*sal)+(0.95*sal);
    }
    printf("%f",sal);
    }
    
    
