#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen iki tam sayının toplamını fonksiyon kullanarak hesaplayan C
// programını yazınız.

int collect(int beyza, int aziz) { return beyza + aziz; }

int main() {

  int number1, number2;
  printf("Please enter two numbers\n");
  scanf("%d%d", &number1, &number2);
  printf("Collection of the numbers is %d", collect(number1, number2));

  return 0;
}