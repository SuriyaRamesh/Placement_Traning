/*  Name : check whether given number is  palindrome or not
    Date : 26 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum,num, digit, rev=0;
    printf("Enter a number : ");
    scanf("%d",&inum);
    num=inum;
    while(inum!=0) {
        digit = inum%10;
        rev = (rev*10)+digit;
        inum/=10;
    }
    //printf("inum : %d",inum);   After executing while loop inum value become 0, so copy the value of inum in a temporary variable(num)
    
    if(rev==num) {
        printf("Palindrome!!!!");
    }
    else {
        printf("Not Palindrome!!!!");
    }
    return 0;
}