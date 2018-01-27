/*  Name : Print the sum of digits of a given number
    Date : 26 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum, digit, sum=0;
    printf("Enter a number : ");
    scanf("%d",&inum);
    while(inum!=0) {
        digit = inum%10;
        sum += digit;
        inum/=10;
    }
    printf("Sum of digits : %d ", sum);
    return 0;
}