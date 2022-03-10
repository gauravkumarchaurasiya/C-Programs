#include<stdio.h>
#include<conio.h>


void main(){
    int n,fact=1;
    int factorial(n)
    {
    if (n>0){
    fact *=n;
    factorial(n-1);
    }
    else{
    return fact;}
    }
    //clrscr();
    printf("Enter a number whose factorial you want :");
    scanf("%d",&n);
    if (n>0){
    fact = factorial(n);
    }
    printf("The factorial of %d will be : %d",n,fact);

}
