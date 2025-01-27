#include<stdio.h>
struct car{
    char model[100];
    int lanchyear;
};
union complex{
    int real;
    int imag;
};
void main(){
    int i,n;
    struct car c;
    union complex com;
    printf("enter a car model: ");
    scanf("%s",c.model);
    printf("enter a car launch year :");
    scanf("%f",&c.lanchyear);
    printf("enter a real number: ");
    scanf("%d",&com.real);
    printf("%d %d",sizeof(c),sizeof(com));
    printf("\n%d",com.imag);
}
