/*  Name : Print the count of digits of a given number
    Date : 26 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum, digit, count=0;
    printf("Enter a number : ");
    scanf("%d",&inum);
    while(inum!=0) {
        digit = inum%10;
        count++;
        inum/=10;
    }
    printf("Count of digits : %d ", count);
    return 0;
}