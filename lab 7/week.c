#include <stdio.h>
void main(){
    int day;
    printf("enter a day number(1-7)");
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("monday");
           break;
        case 2: printf("tuesday");
           break;  
        case 3: printf("wenesday");
           break; 
        case 4: printf("thrusday");
           break;
        case 5: printf("friday");
           break;
        case 6: printf("saturday");
           break;
        case 7: printf("sunday");
           break;            
    }
}