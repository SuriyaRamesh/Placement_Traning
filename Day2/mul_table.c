/*  Name : print the mutliplication table
    Date : 26 Jan 2018
    VERSION : 1.0 */

#include<stdio.h>
int main()
{
    int inum, limit;
    printf("Enter the number : ");
    scanf("%d",&inum);
    printf("Enter the limit : ");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++) {
        printf("%d x %d = %d\n",inum,i,inum*i);
    }
    return 0;
}