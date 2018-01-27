/*  Name : Print the fabonacci series
    Date : 27 Jan 2018
    Version : 1.0 */

#include<stdio.h>
void fab(int a);
int limit, inum1=-1, inum2=1, inum3 ;
int main() { 
    printf("Enter the limit : \n");
    scanf("%d",&limit);
    fab(limit);
    return 0;
}
void fab(int a) {
    while(a>0) {
    inum3 = inum1 + inum2;
    printf("%d\t",inum3);
    inum1 = inum2;
    inum2 = inum3;
    a--;
    }
}