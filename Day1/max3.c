/* Name :Program to print maximum of three numbers
   Date : 25 jan 2018
   version : 1.0 */

#include<stdio.h>
int main()
{
    int inum1,inum2,inum3;
    printf("Enter number1 : \n");
    scanf("%d",&inum1);
    printf("Enter number2 : \n");
    scanf("%d",&inum2);
    printf("Enter number3 : \n");
    scanf("%d",&inum3);
    if(inum1 > inum2 && inum1>inum3)
        printf("Solu : %d is max\n",inum1);
    else if(inum2>inum3)
        printf("Solu : %d is max\n",inum2);
    else
        printf("Solu : %d is max\n",inum3);
}