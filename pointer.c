#include<stdio.h>
#include<conio.h>

void main(){
<<<<<<< HEAD
    int a,b,*c,**d;
=======
    int a,b,*c;
>>>>>>> 83f627820df022c801dbf0bc7455e936475baecd
    //clrscr();
    a  = 5;
    b = a - 8;
    c  = &b;
<<<<<<< HEAD
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

=======
    // printf("the value of a : %d",a);
    // printf("the value of b : %d",b);
    // printf("the value of c : %u",c);
    // printf("the value of &c : %u",&c);
    // printf("the value of *c : %d",*c);
    printf("the value of &c : %u\n",&c);
    printf("the value of &c : %d\n",&c);
    printf("the value of &c : %p\n",&c);
>>>>>>> 83f627820df022c801dbf0bc7455e936475baecd

    getch();}