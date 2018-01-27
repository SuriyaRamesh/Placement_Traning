/* Name :Program to print if the given number is divisible by 3 print "foo" 
   and if it is divisible by 5 print "bar"
   and if it is divisible by both print "foobar" 
   Date : 25 jan 2018
   version : 1.0 */

#include<stdio.h>
int main()
{
    int inum;
    printf("Enter the number : \n");
    scanf("%d",&inum);
    if((inum%3==0) && (inum%5==0))
        printf("\nfoobar.............");
    else if(inum%3==0)
        printf("\nfoo................");
    else if(inum%5==0)
        printf("\nbar...............");
    else
        printf("oh no...............");
}