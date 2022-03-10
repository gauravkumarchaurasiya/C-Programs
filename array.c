#include<stdio.h>
#include<conio.h>
void main(){
    int arr[]={4,6,2,6};
    int arr1[5];
    printf("%d",arr[2]);

    for (int i = 0;i<6;i++){
        printf("Enter array elements ");
        scanf("%d",&arr1[i]);
    }
    for (int i = 0;i<6;i++){
        printf(" array elements ");
        printf("%d",arr1[i]);
    }
    getch();
}