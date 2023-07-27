#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen iki tamsayının toplamını,farkını, çarpımını ve bölümünü
// gerçekleştiren C programını fonksiyon kullanmadan ve fonksiyon kullanarak
// yazınız

float calculator(float number1, float number2, char action) {
  if (action == '+') {
    return number1 + number2;
  } else if (action == '-') {
    return number1 - number2;
  } else if (action == '*') {
    return number1 * number2;
  } else if (action == '/') {
    return number1 / number2;
  } else {
    printf("Invalid action!");
  }
}

int main() {

  float number1, number2;
  char action;

  printf("What action do you want to do?(+,-,/,*)\n");
  scanf("%c", &action);

  printf("Please enter 2 numbers\n");
  scanf("%f%f", &number1, &number2);

  printf("Result: %.2f", calculator(number1, number2, action));
}