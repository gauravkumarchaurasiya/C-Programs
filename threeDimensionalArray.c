#include<stdio.h>
#include<conio.h>
void main(){
    int arr[2][5][6];
    for (int i = 0;i<2;i++){
        for (int j = 0;j<5;j++){
            for (int k = 0;k<6;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for (int i = 0;i<2;i++){
        for (int j = 0;j<5;j++){
            for (int k = 0;k<6;k++){
                printf("%d",arr[i][j][k]);
            }
        }
    }
}