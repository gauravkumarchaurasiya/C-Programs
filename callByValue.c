// Pass by Value: In this parameter passing method, values of actual parameters are copied to function’s formal parameters
//  and the two types of parameters are stored in different memory locations.
//   So any changes made inside functions are not reflected in actual parameters of caller.
 #include<stdio.h>
 #include<conio.h>
int num();

int main(){
    int x = 10,b = 20;
    num(x,b) ;
    printf("\nThe value after fun call x is %d and b is %d ",x,b);
}

int num(int a,int b){
    a =60;
    printf("the a is %d ",a);
    printf("the b is %d ",b);
}