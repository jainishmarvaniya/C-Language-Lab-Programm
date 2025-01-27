#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100];
    printf("enter a string 1: ");
    gets(str1);
    printf("enter a string 2: ");
    gets(str2);
    printf("string length=%d",strlen(str1));
    if(strcmp(str1,str2)==0){
        printf("both string are same:");

    }
    else{
        printf("not same:");
    }
    printf("%s\n",strrev(str1));
    printf("%s\n",strlwr(str1));
    printf("%s\n",strupr(str1));
    printf("%s\n",strcpy(str1,str2));
    printf("%s\n",strcat(str1,str2));
}