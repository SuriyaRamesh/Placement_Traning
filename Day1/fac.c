/* Name :  Print factors of a number
    Date : 25 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum;
    printf("Enter a number to find the factor : ");
    scanf("%d",&inum);
    printf("1 ");
    for(int i=2; i<=inum/2; i++) {
        if(inum%i==0) 
            printf("%d ",i);
    }
    printf("%d",inum);
    return 0;
}