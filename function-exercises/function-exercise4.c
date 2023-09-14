#include <stdio.h>
#include <stdlib.h>

// klavyeden taban ve üs değeri girilen a^b şeklindeki bir işlemin sonucunu
// fonksiyon kullanarak hesaplayan ve sonuçları ekrana listeleyen C kodunu
// yazınız

int exponential(int base, int exponent) {
  int i;
  int result = 1;
  for (i = 1; i <= exponent; i++) {
    result = base * result;
  }
  return result;
}

int main() {

  int number1, number2;
  printf("Please enter 2 numbers\n");
  scanf("%d%d", &number1, &number2);
  printf("%d^%d=%d", number1, number2, exponential(number1, number2));

  return 0;
}