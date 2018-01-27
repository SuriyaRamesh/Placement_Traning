/*  Name : Check whether the given number is prime or not
    Date : 26 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main()
{
    int inum, i, count=0;
    printf("Enter a number : ");
    scanf("%d",&inum);
    for(i=2; i<=inum/2; i++) {
        if(inum%i==0)
            count++;
    }
    if(count==0)
        printf("Prime number.......");
    else
        printf("Not Prime Number......");
    return 0;
}