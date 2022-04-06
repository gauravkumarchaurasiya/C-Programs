#include <stdio.h>
int main(){
    int arr_count,arr[arr_count];
    int a=0,b=0,c=0;
    printf("Enter size of array : ");
    scanf("%d",&arr_count);
    for (int i =0;i<arr_count;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<arr_count;i++){
        if (arr[i]<0)
            a+=1;
        else if (arr[i]>0)
            c+=1;
        else {
            b+=1;
        }
    }
printf("%d %d %d",a/arr_count,b/arr_count,c/arr_count);

}
