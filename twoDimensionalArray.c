#include<stdio.h>
#include<conio.h>
void main(){
    int arr[6][5] = {2,6,5,3,6,5,8,7,6,4,6,5,2,3,12,45,4,85,36,96,54,5,8,5,6,4,7,2,5,8,8};
    for (int i =0;i<6;i++){
        for (int j = 0;j<5;j++){
        printf("%d ,",arr[i][j]);
        }
    }
}