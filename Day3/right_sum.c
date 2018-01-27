#include<stdio.h>
void replace(int a[], int n);
int inum, isum=0;
int main() {
    printf("Enter size of an array : \n");
    scanf("%d",&inum);
    int a[inum];
    printf("Enter array elements : \n ");
    for(int i=0; i<inum; i++) {
        scanf("%d",&a[i]);
    }
    replace(a,inum);
    return 0;
}
void replace(int a[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            isum+=a[j];
        }
        a[i]=isum;
        printf("%d\t",a[i]);
        isum=0;
    }
}