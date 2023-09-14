#include <stdio.h>
#include <stdlib.h>

// Klavyeden girilen iki tam sayının toplamını, farkını,çarpımını ve bölümünü
// gerçekleştiren C programını yazınız.

float fourprocess(float a, float b, float process) {

  if (process == '+') {
    return a + b;
  } else if (process == '-') {
    return a - b;
  } else if (process == '*') {
    return a * b;
  } else if (process == '/') {
    return a / b;
  } else {
    printf("You entered wrong operation");
  }
}

int main() {

  float number1, number2;
  char process;
  printf("Which process do you wanna do ? (+ - / *)\n");
  scanf("%c", &process);
  printf("Please enter two numbers\n");
  scanf("%f%f", &number1, &number2);
  printf("the result of the operation is %.2f",fourprocess(number1, number2, process));
  
  return 0;
}