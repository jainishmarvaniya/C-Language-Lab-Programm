#include<stdio.h>
void main (){
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z')?printf("alphabat"):printf("not alphabat");
}