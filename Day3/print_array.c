/*  Name : Print array in forward and reverse order
    Date : 27 Jan 2018
    Version : 1.0 */
#include<stdio.h>
int main() {
    int inum,i;
    printf("Enter size of an array : \n");
    scanf("%d",&inum);
    int a[inum];
    printf("Enter array elements : \n");
    for(i=0; i<inum; i++){
        scanf("%d",&a[i]);
    }
    printf("Forward order of an array : ");
    for(int i=0; i<inum; i++) {
        printf("%d\t",a[i]);
    }
    printf("\nReverse order of an array : ");
    for(int i=inum-1; i>=0; i--) {
        printf("%d\t",a[i]);
    }
    return 0;
} 