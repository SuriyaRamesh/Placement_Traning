/*  Name : Check whether the given number is adam or not
    Date : 26 Jan 2018
    Version : 1.0 */
    
    #include<stdio.h>
int reverse(int);
int main() {
    int sq, sq_rev,r, ans;         
    //printf("Enter a number : \n");
    //scanf("%d",&inum);
    for(int inum=1; inum<=5000; inum++){
        sq=inum*inum;                       //printf("Square of number : %d\n",sq);
        r = reverse(inum);                  //printf("Reverse of number : %d\n",r);
        sq_rev = r*r;                       //printf("Square of reverse number : %d\n",sq_rev);
        ans = reverse(sq_rev);              //printf("Reverse of Square of reverse number : %d\n",ans);
        if(ans == sq) 
            printf("%d\n",inum);
    }
    /*if(ans==sq)
        printf("Adam Number!!!!!");
    else
        printf("Not Adam Number!!!!!");
    return 0;*/
}
int reverse(int a) {
    int rev=0;
    while(a!=0){
        int digit = a % 10;
        rev = (rev*10)+digit;
        a/=10;
    }
    return rev;
}
