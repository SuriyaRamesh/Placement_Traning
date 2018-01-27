/*  Name : print sum of an array
    Date : 27 Jan 2018
    Version : 1.0 */

#include<stdio.h>
int main() {
    int inum, isum=0;
    printf("Enter size of an array : \n");
    scanf("%d",&inum);
    int a[inum];
    printf("Enter elements of an array : \n");
    for(int i=0; i<inum; i++) {
        scanf("%d",&a[i]);
        isum +=a[i];
    }
    printf("Sum of an array is : %d\n",isum);
    printf("Array addr : %d\n",a);
    printf("Array addr : %d\n",a+1);
    printf("Array addr : %d\n",a+2);
    return 0;

}