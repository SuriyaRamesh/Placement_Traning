/*  Name : Print the maximum of given four numbers
    Date : 25 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int inum1, inum2, inum3, inum4, imax;
void max(int inum2, int inum3, int inum4); 
int main() {
    printf("Enter number 1 : \n");
    scanf("%d",&inum1);
    printf("Enter number 2 : \n");
    scanf("%d",&inum2);
    printf("Enter number 3 : \n");
    scanf("%d",&inum3);
    printf("Enter number 4 : \n");
    scanf("%d",&inum4);
    //printf(inum1>inum2 && inum1>inum3? "inum1 is maximum" : max(inum2, inum3, inum4));
    if(inum1>inum2 && inum1>inum3)
        printf("%d is maximun\n",inum1);
    else 
        max(inum2,inum3,inum4);
    return 0;
} 

void max(int inum2,int inum3, int inum4) {
    imax = inum2;
    if(imax<inum3) 
        imax=inum3;
    if(imax<inum4) 
        imax=inum4;
    printf("%d is maximum ",imax);
}