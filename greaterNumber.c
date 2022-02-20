// if 
// if else
// nested if else
// else if ladder 
// case control structure
#include<stdio.h>
//#include<conio.h>

void main(){
    int a,b;
    //clrscr();
    printf("Enter two number : ");
    scanf("%d%d  ",&a,&b);
    if (a>b){
        printf("%d is greater than %d",a,b);
    
    }
    else{
        printf("%d is greater than %d",b,a);
    }
}