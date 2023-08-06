#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan girdiği bir n sayısına kadar olan bütün sayıların toplamını
// hesaplayıp console bastırabilen bir program yazın.

int main() {

  int number;
  int i;
  int total;

  printf("Please enter a number\n");
  scanf("%d", &number);

  total = 0;
  i = 1;
  while (i <= number) {
    if (i == number) {
      printf("%d", number);
    } else {
      printf("%d + ", i);
    }
    total = total + i;
    i++;
  }
  printf(" = %d", total);

  return 0;
}