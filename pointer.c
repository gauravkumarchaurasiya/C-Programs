#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,*c,**d;
    //clrscr();
    a  = 5;
    b = a - 8;
    c  = &b;
    d =&c;
    printf("the value of a \n: %d",a);
    printf("the value of b \n: %d",b);
    printf("the value of c \n: %u",c);
    printf("the value of &c \n: %u",&c);
    printf("the value of *c \n: %d",*c);
   // -----------------------------------------
    printf("the value of &c : %u\n",&c);
    printf("the value of &c : %d\n",&c);
    printf("the value of &c : %p\n",&c);
        printf("The value of d \n: %d",d);
  printf("The value of &d \n: %d",&d);
  printf("The value of *d \n: %d",*d);
  printf("The value of **d \n: %d",**d);


    getch();}