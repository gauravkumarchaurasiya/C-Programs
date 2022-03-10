#include<stdio.h>
#include<conio.h>
 void main(){
     int n,rem,sum = 0,num;
     //clrscr();
     printf("Enter a number to check armstrong : ");
     scanf("%d",&n);
     for (int i = 0;i<sizeof(n);i++){
         rem = n%10;
         num = n/10;
         sum+=rem;
     }
     if (sum==n){
         printf("%d is a armstrong ",n);
     }
     else{
         printf("%d is NOT  a armstrong ",n);
     }
 }