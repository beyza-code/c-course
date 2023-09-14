#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen bir tam sayının faktoriyelini fonksiyon olarak hesaplayan C
// programını yazınız.

int factorial(number) {
  int i;
  int result = 1;
  for (i = 1; i <= number; i++) {
    result = result * i;
  }
  return result;
}

int main() {
  int number;
  printf("Please enter a number\n");
  scanf("%d", &number);
  printf("%d!=%d", number, factorial(number));
  return 0;
}