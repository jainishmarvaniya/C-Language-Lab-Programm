#include <stdio.h>
void main () {
    int day;
    printf("enter a month number(1-12):");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:printf("31 days");
      break;
    case 2:printf("28 days");
      break;
    case 4:
    case 6:
    case 8:
    case 10:
    case 12:printf("30 days");
    default:
        break;
    }
}