/* Name :Program to print n even numbers
   Date : 25 jan 2018
   version : 1.0 */

#include<stdio.h>
int main()
{
    int inum, count=0;
    printf("Enter a number : \n");
    scanf("%d",&inum);
    printf("Even numbers : ");
    for(int i=1; i>0; i++) {
        if(i%2==0)
        {
            printf("%d ",i);
            count++;
        }
        if(count==inum)
            break;
    }
}