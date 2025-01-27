#include<stdio.h>
void main (){
    int i,digit,n;
    printf("1=one,2=two,3=three,4=four,5=five,6=six,7=seven,8=eigth,9=nine,0=zero");
    printf("enter a digit(1-9):");
    scanf("%d",&digit);
    switch(digit)
    {
    case 1: printf("one");
        break;
    case 2: printf("two");
        break;
    case 3: printf("three");
        break;
    case 4: printf("four");
        break;
    case 5: printf("five");
        break;
    case 6: printf("six");
        break;
    case 7: printf("seven");
        break;
    case 8: printf("eight");
        break;
    case 9: printf("nine");
        break;
    }
}
