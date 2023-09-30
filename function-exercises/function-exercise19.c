#include <stdio.h>
#include <stdlib.h>

// Kullanıcı tarafından grilen tam sayılar x ve y değişkenlerinde
// tutulmaktadır.X ve Y değişkenlerinde yer alan değerlerin yerlerinin
// değişmmesini sağlayan fonksiyon prototipi aşağıda verilmiştir. uygun C
// programını ve fonksiyonunu yazınız
// void yer değiştir (int number1 int number2);

void switchPlaces(int number1, int number2) {
  int temporary;
  temporary = number1;
  number1 = number2;
  number2 = temporary;
  printf("first number is %d,second is %d", number1, number2);
}

int main() {
  int number1, number2;

  printf("Please enter 2 single numbers\n");
  scanf("%d%d", &number1, &number2);
  printf("first number is %d,second number is %d\n", number1, number2);
  switchPlaces(number1, number2);

  return 0;
}