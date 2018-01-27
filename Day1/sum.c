/*  Name : Print sum of n numbers
    Date : 25 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum, sum = 0;
    printf("Enter count value : \n");
    scanf("%d",&inum);
    sum = (inum*(inum+1))/2;
    printf("Sum of first %d is : %d\n",inum,sum);
    return 0;
} 