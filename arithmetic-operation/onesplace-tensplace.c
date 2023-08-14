#include <stdio.h>
#include <stdlib.h>

// Basmaklardaki sayıyı bulma

int main() {

  int number;
  int ones_place;
  int tens_place;
  printf("Please enter a number\n");
  scanf("%d", &number);

  ones_place = number % 10;
  tens_place = number % 100 / 10;
  printf("Ones place is %d\n", ones_place);
  printf("Tens place is %d\n", tens_place);

  return 0;
}