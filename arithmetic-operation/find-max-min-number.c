#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan 3 farklı tam sayı girmesini isteyen, kullanıcının girdiği bu
// sayıları okuyup ayıların en küçüğünü ve en büyüğünü ekrana bastıran programın
// C kodunu yazınız.

int main() {

  int number1, number2, number3;
  int min, max;

  printf("Please enter 3 numbers\n");
  scanf("%d%d%d", &number1, &number2, &number3);

  max = number1;

  if (number2 > max) {
    max = number2;
  }
  if (number3 > max) {
    max = number3;
  }
  printf("Maximum number is %d\n", max);

  min = number1;

  if (number2 < min) {
    min = number2;
  }
  if (number3 < min) {
    min = number3;
  }
  printf("Minimum number is %d", min);

  return 0;
}