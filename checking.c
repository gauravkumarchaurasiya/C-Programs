#include <stdio.h>
int main()
{
  int n, c, k;
  //clrscr();
  printf("Enter a number : ");
  scanf("%d", &n);
  for (k = 1; k <= n; k++){
    for (c = 1; c <= n-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

 }