#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen 2 tam sayının büyük olanını fonksiyon kullanarak bulan C
// programını yazınız.

int bigNumber(int a, int b) {
  if (a > b) {
    return 1;
  } else if (a < b) {
    return 0;
  } else {
    return 2;
  }
}

int main() {

  int number1, number2, result;
  printf("Please enter 2 numbers\n");
  scanf("%d%d", &number1, &number2);
  result = bigNumber(number1, number2);

  if (result == 1) {
    printf("%d is bigger than %d\n", number1, number2);
  } else if (result == 0) {
    printf("%d is bigger than %d\n", number2, number1);
  } else {
    printf("%d is equal to %d\n", number1, number2);
  }
  return 0;
}