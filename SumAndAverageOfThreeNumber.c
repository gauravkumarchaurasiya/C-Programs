// Write a C program to find sum and average of three numbers.
#include<stdio.h>
#include<conio.h>

void main(){
    int num1,num2,num3,sum;
    //clrscr();
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("\nEnter number 2: ");
    scanf("%d",&num2);
    printf("\nEnter number 3 : ");
    scanf("%d",&num3);
    sum = num1+num2+num3;
    printf("\n The sum of %d +%d +%d will be : %d\n and average will be : %d ",num1,num2, num3,sum,sum/3);
    getch();
    
}
