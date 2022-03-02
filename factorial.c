#include<stdio.h>
#include<conio.h>
void main(){
    int n, fact=1;
    //clrscr();
    printf("Enter a number whose factorial you want :");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        fact *=i;

    }
    printf("The factorial of %d will be : %d",n,fact);
}
