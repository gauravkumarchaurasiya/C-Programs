#include<stdio.h>
#include<conio.h>
void main(){
    int n1,n2,gcd=0;
    //clrscr();
    printf("Enter number 1 and 2 : ");
    scanf("%d %d",&n1,&n2);
    for (int i = 1; i<= n1 && i<=n2 ;i++){
        if (n1%i==0 && n2%i==0){
            gcd=i;

        }}
        printf("The gcd of %d and %d is : %d ",n1,n2,gcd);
    
}