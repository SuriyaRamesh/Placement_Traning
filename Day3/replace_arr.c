/*  Name : Replace every element with sum of other elements
    Date : 27 Jan 2018
    Version :1.0*/

#include<stdio>
int inum,  isum=0;
void pre_sum_arr(int a[], int inum, int psa[]);
void Suf_sum_arr(int a[], int inum, int ssa[]);
int main(){
    printf("Enter the array limit : \n");
    scanf("%d",&inum);
    int a[inum];
    int psa[inum], ssa[inum];
    printf("Enter the array : \n");
    for(int i=0; i<inum; i++) {
        scanf("%d",&a[i]);
    }
    psa[0]=isum;
    //printf("Prefix sum array : \n");
    pre_sum_arr(a, inum, psa);
    //printf("Suffix sum array : \n");
    ssa[inum]=0;
    Suf_sum_arr(a, inum, ssa);
    return 0;
}
void pre_sum_arr(int a[], int n, int psa[]) {
    printf("%d\t",psa[0]);
    for(int i=0; i<n; i++) {
        isum+=a[i];
        psa[i+1] = isum;
        printf("%d\t",psa[i+1]);
    }
}
void Suf_sum_arr(int a[], int n, int ssa[]) {
    for(int i=0; i<n; i++) {
        ssa[i]=isum;
        isum-=a[i];
    }
}
