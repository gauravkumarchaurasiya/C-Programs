// Write a C program to find the sum of individual digits of a given positive integer.

#include<stdio.h>
#include<conio.h>

void main(){
    int num,sum = 0,k = 0;
    //clrscr();
    printf("Enter a integer number : ");
    scanf("%d",&num);
    for(int i = 0;i<=num;i++){
        k = num % 10;
        num = num / 10;
        sum += k;
        k = 0;

    }
    printf("\n The sum of individual digits will be : %d",sum);
}