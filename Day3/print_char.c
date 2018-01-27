/*  Name : print alphabets
    Date : 27 Jan 2018
    Version : 1.0 */
#include<stdio.h>
int main() {
    int i;
    printf("Alphabets : \n");
    for(i=65;i<=90;i++){
            printf("%c\t",i);
    }
    printf("\nAlphabets : \n");
    for(i=97;i<=122;i++){
            printf("%c\t",i);
    }
    return 0;
}