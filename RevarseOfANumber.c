#include<stdio.h>
#include<conio.h>

void main() {

  int n, reverse = 0, r;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n!= 0) {
   r = n % 10;
    reverse = reverse * 10 + r;
    n=n/10;
  }
   

  printf("Reversed number = %d", reverse);

  return 0;
}
