/*  Name : For given n numbers find sum of all numbers which is divisible by 3 or 5.
    Date : 25 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int iran;
int Div_sum(int iran);
int main() {
    printf("Enter the range : \n");
    scanf("%d",&iran);
    printf("Sum is : %d\n",Div_sum(iran));
}
int Div_sum(int iran) {
    int sum=0;
    for(int i=1;i<=iran; i++) {
        if(i%3==0 || i%5==0) {
            sum+=i;
        }
    }
    return sum;
}
