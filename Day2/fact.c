/*  Name : Print factorial of given number 
    Date : 26 Jan 2018
    Version : 1.0 */

#include<stdio.h>
//int factorial(int);
int main()
{
    int inum,fact=1;
    printf("Enter a number : ");
    scanf("%d",&inum);
    if(inum==0)
        fact=1;
    else
        for(int i=1;i<=inum;i++)
            fact=fact*i;
    printf("Factorial is : %d\n",fact);
}
