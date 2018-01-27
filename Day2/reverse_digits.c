/*  Name : Print the reverse of a given number
    Date : 26 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum, digit, rev=0;
    printf("Enter a number : ");
    scanf("%d",&inum);
    while(inum!=0) {
        digit = inum%10;
        rev = (rev*10)+digit;
        inum/=10;
    }
    printf("Reverse of a number : %d ", rev);
    return 0;
}