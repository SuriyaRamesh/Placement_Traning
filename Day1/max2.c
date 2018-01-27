/* Name :Program to print maximum of two numbers
   Date : 25 jan 2018
   version : 1.0 */

#include<stdio.h>
int main()
{
    int inum1,inum2;
    printf("Enter number1 : \n");
    scanf("%d",&inum1);
    printf("Enter number2 : \n");
    scanf("%d",&inum2);
    if(inum1 > inum2)
        printf("Solu : %d is max\n",inum1);
    else
        printf("Solu : %d is max\n",inum2);
}