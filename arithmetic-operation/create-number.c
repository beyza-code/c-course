#include <stdio.h>
#include <stdlib.h>

// Tek haneli sayı olan x y ve z yi girdi olarak alan ve yüzler basamağına x
// onlar basamağına y ve birler basamağına z koyan ve sonunda bu sayıyı bulan
// bir C programı yazınız.
int main() {
  int hundreds_place;
  int tens_place;
  int ones_place;
  int total;

  printf("Hundreds place :");
  scanf("%d", &hundreds_place);

  printf("Tens Place :");
  scanf("%d", &tens_place);

  printf("Ones Place :");
  scanf("%d", &ones_place);

  total = 100 * hundreds_place + 10 * tens_place + ones_place;
  printf("The number is %d", total);

  return 0;
}