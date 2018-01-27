/* Name : print days of a week for the given number from 1 to 7
    Date : 25 jan 2018
    version : 1.0 */

#include<stdio.h>
int main() {
    int inum;
    printf("Enter a number from 1 to 7 \n: ");
    scanf("%d",&inum);
    switch(inum) {
        case 1 :
            printf("Day is Sunday.......");
            break;
        case 2 :
            printf("Day is Monday.......");
            break;
        case 3 :
            printf("Day is Tuesday.......");
            break;
        case 4 :
            printf("Day is Wednesday.......");
            break;
        case 5 :
            printf("Day is Thursday.......");
            break;
        case 6 :
            printf("Day is Friday.......");
            break;
        case 7 :
            printf("Day is Saturday.......");
            break;
        default :
            printf("Invalid input~");
            break;
    }
}