#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,*c;
    //clrscr();
    a  = 5;
    b = a - 8;
    c  = &b;
    // printf("the value of a : %d",a);
    // printf("the value of b : %d",b);
    // printf("the value of c : %u",c);
    // printf("the value of &c : %u",&c);
    // printf("the value of *c : %d",*c);
    printf("the value of &c : %u\n",&c);
    printf("the value of &c : %d\n",&c);
    printf("the value of &c : %p\n",&c);

    getch();}