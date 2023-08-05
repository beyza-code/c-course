#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan girdiği iki tam sayıdan, ilkinin ikincisi ile karşılaştırılıp
// eşit olup olmadığını, eğer eşit değilse ikincisinden büyük mü yoksa küçükmü
// olduğunu ekrana bastıran bir program yazın.

int main() {
  int number1, number2;
  printf("Please enter two numbers\n");
  scanf("%d%d", &number1, &number2);

  if (number1 == number2) {
    printf("two numbers are equal to each other\n");
  }
  if (number1 != number2) {
    printf("two numbers aren't equal to each other\n");
  }
  if (number1 > number2) {
    printf("number 1 is bigger than number 2\n");
  }
  if (number2 > number1) {
    printf("Number 2 is bigger than number 1\n");
  }

  // Yazdığınız programa birinci sayının ikinci sayının katı olup olmadığını
  // bastıracak kodu yazın.

  if (number1 % number2 == 0) {
    printf("number 1 is a multiple of number 2\n");
  } else {
    printf("number 1 is not a multiple of number 2\n");
  }
  return 0;
}