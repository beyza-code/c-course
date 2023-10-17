#include <stdio.h>
#include <stdlib.h>

// Bir fonksiyon yazın
// Bu  fonksiyon ; toplama ,çıkarsam ,çarpma ,bölme temel dört işlemleri yapsın
// (+,-,*,/) işlemler için switch case yapısını kullanın yukardaki fonksiyonu
// değişkenin değeriyle çağıran bir C programı yazın. aynı programı değişkenin
// adresiyle çağırma yöntemini kullanarak değiştirin

float calcu(float one, float two, char c) {

  float transactionResult;
  switch (c) {
  case '+': {
    transactionResult = one + two;
    break;
  }
  case '-': {
    transactionResult = one - two;
    break;
  }
  case '/': {
    transactionResult = one / two;
    break;
  }
  case '*': {
    transactionResult = one * two;
  }
  }
  return transactionResult;
}

int main() {

  float firstNumber, secondNumber;
  char operation;
  float result;
  printf("What operation do you wanna do\n");
  scanf("%c", &operation);
  printf("Please enter 2 numbers\n");
  scanf("%f%f", &firstNumber, &secondNumber);
  result = calcu(firstNumber, secondNumber, operation);
  printf("first number %f,second number %f operation %c and the result is %.2f",firstNumber, secondNumber, operation, result);
  return 0;
}