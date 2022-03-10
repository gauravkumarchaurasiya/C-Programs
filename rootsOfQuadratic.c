#include<stdio.h>
#include<conio.h>
<<<<<<< HEAD
#include<math.h>

void main(){
    float a,b,c;
    //clrscr();
    printf("Enter coefficient of equation[a,b,c] :");
    scanf("%f %f %f",&a,&b,&c);
    printf("The equation will be : %0.1f x^2 %0.1f x %0.1f",a,b,c);
    float det = (b*b - (4*a*c));
    printf("The determinant will be %0.1f",det);
    float root1 = (-b - sqrt(det)/2*a);
    float root2 = (-b + sqrt(det)/2*a);
    if (det == 0){
        printf("The roots will be %0.1f ,%0.1f ",root1,root2);
    }
    else if (det > 0){
        
        printf("The roots will be %.1f,%0.1f",root1,root2);
    }
    else{
        printf("The roots will be %.1f,%0.1f",root1,root2);
        

    }

    getch();
=======
void main(){
    int 
>>>>>>> 83f627820df022c801dbf0bc7455e936475baecd
}