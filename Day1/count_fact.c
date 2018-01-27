/*  Name : Print the count of factors of a number
    Date : 25 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum, count=2;
    printf("Enter the number to find factor : ");
    scanf("%d",&inum);
    printf("Factors of a number : ");
    printf("1 ");
    for(int i=2; i<=inum/2; i++) {
        if(inum%i==0) {
            printf("%d ",i);
            count++;           
        }
    }
    printf("%d",inum);
    printf("\nCount of factors : %d",count);
    return 0;
}