/*  Name : Print sum of first n odd numbers
    Date : 25 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum, sum_odd = 0;
    printf("Enter count of odd numbers : ");
    scanf("%d",&inum);
    sum_odd = inum * inum;
    printf("Sum of first %d odd numbers : %d\n",inum, sum_odd);
    return 0;
}