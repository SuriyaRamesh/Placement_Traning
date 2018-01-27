/*  Name : Check whether there are repeated digits in a given number
    Date : 27 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int count=0;
void digit(int num);
int main() {
    int inum;
    printf("Enter a number : \n");
    scanf("%d",&inum);
    digit(inum);
    return 0;
}
void digit(int num) {
    while(num!=0) {
        if(num%10 == (num/10)%10) {
            print("")
        }

    }
}